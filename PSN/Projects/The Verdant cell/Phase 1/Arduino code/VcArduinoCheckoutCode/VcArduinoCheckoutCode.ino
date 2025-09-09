// --------------------------------------------------------
// Project: The Verdant Cell - Automation Controller
// Version: v1.0.0
// Date: 2025-08-24
// Notes: Full system checkout with calibrated moisture sensors
// --------------------------------------------------------

#include <Wire.h>         // I2C communication
#include <Adafruit_GFX.h> // Required for OLED display
#include <Adafruit_SHT31.h>
#include <Adafruit_SSD1306.h>

// -----------------------------
// Pin and Hardware Setup
// -----------------------------
int sensorPins[4] = {A0, A1, A2, A3};  // Moisture sensors

// Display setup
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

// SHT31 Temperature/Humidity Sensor
Adafruit_SHT31 sht31 = Adafruit_SHT31();

// -----------------------------
// Moisture Calibration Data
// -----------------------------
int dryValues[4] = {566, 568, 575, 575};   // Dry = air
int wetValues[4] = {211, 203, 213, 209};   // Wet = water

// -----------------------------
// Functions
// -----------------------------
int getMoisturePercent(int sensorIndex, int rawValue) {
  int dry = dryValues[sensorIndex];
  int wet = wetValues[sensorIndex];
  rawValue = constrain(rawValue, wet, dry);
  return map(rawValue, dry, wet, 0, 100);
}

void initializeDisplay() {
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println("SSD1306 allocation failed");
    for (;;);
  }
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.println("Display Ready");
  display.display();
}

void initializeSHT31() {
  if (!sht31.begin(0x44)) {
    Serial.println("Couldn't find SHT31 sensor!");
    while (1) delay(1);
  }
  Serial.println("SHT31 sensor ready");
}

// -----------------------------
// Setup
// -----------------------------
void setup() {
  Serial.begin(9600);
  Serial.println("Starting Full System Checkout...");

  initializeDisplay();
  initializeSHT31();
}

// -----------------------------
// Loop
// -----------------------------
void loop() {
  // Read Moisture Sensors
  Serial.println("Moisture Sensor Readings:");
  for (int i = 0; i < 4; i++) {
    int rawValue = analogRead(sensorPins[i]);
    int moisturePercent = getMoisturePercent(i, rawValue);
    Serial.print("Sensor ");
    Serial.print(i + 1);
    Serial.print(": ");
    Serial.print(moisturePercent);
    Serial.println("%");
  }

  // Read SHT31 Temperature and Humidity
  float temp = sht31.readTemperature();
  float humidity = sht31.readHumidity();
  Serial.print("Temp: ");
  Serial.print(temp);
  Serial.print(" °C | Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  // Update OLED Display
  display.clearDisplay();
  display.setCursor(0, 0);
  display.println("Moisture:");
  for (int i = 0; i < 4; i++) {
    int rawValue = analogRead(sensorPins[i]);
    int moisturePercent = getMoisturePercent(i, rawValue);
    display.print("S");
    display.print(i + 1);
    display.print(": ");
    display.print(moisturePercent);
    display.println("%");
  }
  display.println();
  display.print("T: ");
  display.print(temp, 1);
  display.println(" C");
  display.print("H: ");
  display.print(humidity, 1);
  display.println(" %");
  display.display();

  Serial.println("-------------------------");
  delay(1000);  // Update every second
}

// --------------------------------------------------------
// Version History
// --------------------------------------------------------
/*
v1.0.0 - 2025-08-24
- Initial full system checkout build
- Calibrated moisture sensors with dry/wet values
- Integrated display and SHT31 environmental readings
*/


