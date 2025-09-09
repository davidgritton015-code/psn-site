📘 **Document Title:**  
 **VC Phase 1 – Component Selection Notes**  
 📅 **Date:** August 17, 2025  
 🔖 **Project Code:** NODE-OC-02 • *Verdant Cell*  
 ✍️ **Maintained by:** Human-AI Collaborative Build (PSN)

---

## **🧠 Design Intent & Selection Philosophy**

Component selection for *The Verdant Cell* focused on:

* **Modularity** for fast prototyping and future expansion.

* **Environmental durability** for long runtime and minor exposure to moisture.

* **Amazon/Home Depot sourcing** to ensure short lead times and replicability.

* **Ease of integration with Arduino** to streamline control logic.

The system must support the following **core subsystems**:

1. Lighting (full-spectrum grow)

2. Ventilation (high-CFM extraction)

3. Moisture-based irrigation

4. Environmental sensing (humidity & temperature)

5. Manual override interface (switch panel)

---

## **🔩 Core Components & Rationale**

### **1\. Controller Platform**

* **Prototype:** Arduino UNO

* **Final Integration:** Arduino Nano \+ USB cable

* **Why:**

  * UNO offers a full-size dev board with easy debugging.

  * Nano reduces footprint for the final install.

  * Both use the same ATmega328 core for smooth transition.

---

### **2\. Manual Interface**

* **Component:** 6-switch waterproof rocker panel

* **Why:**

  * IP-rated switches support high-moisture environments.

  * Manual overrides allow testing or emergency control.

  * Clean interface without clutter from USB ports.

---

### **3\. Relay Control**

* **Component:** ELEGOO 8-Channel 5V Relay Module w/ Optocouplers

* **Why:**

  * Enough channels to control fan, lights, mist pump, and future outputs.

  * Optocoupler isolation protects the Arduino from back EMF.

  * Compatible with 5V logic from UNO/Nano.

---

### **4\. Power Distribution**

* **Components:**

  * MILAPEAK 6-position dual-row terminal blocks (x10)

  * 6-channel pluggable fused terminal block

  * Buck converter (12V to 5V)

* **Why:**

  * Provides clean, modular 12V distribution.

  * Buck converter steps down to 5V for microcontroller and sensors.

  * Fused terminal block offers fast inline protection and simplifies wiring layout.

---

### **5\. Environmental Sensors**

#### **A. Humidity / Temperature**

* **Component:** SHT31-D

* **Why:**

  * High accuracy with I2C interface.

  * Compact and reliable; better than DHT22 for humidity precision.

  * Longest lead time (\~1.5 weeks), but justified for quality.

#### **B. Soil Moisture**

* **Component:** Capacitive Soil Moisture Sensor v1.2

* **Why:**

  * Non-corrosive design vs resistive probes.

  * Compatible with 3.3–5V signal levels.

  * Supports automation of irrigation with analog readings.

---

### **6\. Actuators / Environmental Control**

#### **A. Ventilation**

* **Component:** GDSTIME 120mm x 38mm IP67 Waterproof 12V Fan

* **Why:**

  * High CFM for efficient air exchange.

  * IP-rated for wet or misty conditions.

  * Dual ball bearing design supports longevity.

#### **B. Lighting**

* **Component:** Barrina T5 1ft Full Spectrum LED Grow Lights (4-pack)

* **Why:**

  * Small form factor for shelf integration.

  * 5000K spectrum supports a wide range of plants.

  * Each light has a toggle switch (can be bypassed with relays).

#### **C. Watering**

* **Component:** ACBungji 12V misting system w/ pump

* **Accessories:**

  * 6mm barbed T connectors

  * Adjustable water drippers

* **Why:**

  * Mist pump stays dry (not submersible), simplifying mounting.

  * Modular T and drip heads allow tuning per plant.

  * Supports hybrid mist \+ drip setup based on moisture sensor feedback.

---

### **7\. Prototyping**

* **Component:** BOJACK Breadboard \+ Jumper Kit

* **Why:**

  * Needed for early circuit layout and I2C pin mapping.

  * Keeps all development clean and reconfigurable before final install.

---

## **💬 Final Notes**

* **Sensor wiring** will be routed through breadboard → terminal block → relay/controller path for easy debugging.

* **Relays will override toggle switches** on components (e.g., lights) once power draw and internals are reverse engineered.

* **Noise is not a concern** for this installation, allowing high-performance components to take priority over silence.

* **Power routing is 12V standard**, stepped down to 5V via buck converter for logic systems.

