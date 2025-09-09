#include <Wire.h>
#include "RTClib.h"

RTC_DS3231 rtc;

const int soilPin = A0;
const int relayPins[8] = {2, 3, 4, 5, 6, 7, 8, 9};

// === Timing settings ===
unsigned long lastRelayTest = 0;
unsigned long relayDelay = 1000;
int currentRelay = 0;

void setup() {
  Serial.begin(9600);
  Wire.begin();

  // --- RTC INIT ---
  if (!rtc.begin()) {
    Serial.println("⚠️ Couldn't find RTC. Check wiring!");
    while (1);
  }

  if (rtc.lostPower()) {
    Serial.println("RTC lost power, setting time to compile time...");
    rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
  }

  // --- RELAY INIT ---
  for (int i = 0; i < 8; i++) {
    pinMode(relayPins[i], OUTPUT);
    digitalWrite(relayPins[i], HIGH); // OFF
  }

  Serial.println("System initialized. Starting loop...");
}

void loop() {
  // --- RTC ---
  DateTime now = rtc.now();
  Serial.print("[TIME] ");
  printDateTime(now);

  // --- SOIL SENSOR ---
  int sensorValue = analogRead(soilPin);
  int moisturePercent = map(sensorValue, 1023, 300, 0, 100);
  moisturePercent = constrain(moisturePercent, 0, 100);
  Serial.print("[SOIL] Value: ");
  Serial.print(sensorValue);
  Serial.print(" → Moisture: ");
  Serial.print(moisturePercent);
  Serial.println("%");

  // --- RELAY TEST ---
  unsigned long nowMillis = millis();
  if (nowMillis - lastRelayTest >= relayDelay) {
    Serial.print("[RELAY] Firing Relay ");
    Serial.println(currentRelay + 1);

    // Turn ON
    digitalWrite(relayPins[currentRelay], LOW);
    delay(500); // On for half a second
    digitalWrite(relayPins[currentRelay], HIGH); // Turn OFF

    currentRelay++;
    if (currentRelay >= 8) {
      currentRelay = 0;
      Serial.println("[RELAY] Full cycle complete\n");
    }

    lastRelayTest = nowMillis;
  }

  delay(1000); // Main loop pacing
}

void printDateTime(DateTime dt) {
  Serial.print(dt.year());
  Serial.print('/');
  Serial.print(dt.month());
  Serial.print('/');
  Serial.print(dt.day());
  Serial.print(" ");
  Serial.print(dt.hour());
  Serial.print(':');
  Serial.print(dt.minute());
  Serial.print(':');
  Serial.println(dt.second());
}
