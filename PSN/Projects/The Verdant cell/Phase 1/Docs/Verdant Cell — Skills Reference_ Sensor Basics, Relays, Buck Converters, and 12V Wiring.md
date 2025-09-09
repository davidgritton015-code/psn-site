# **Verdant Cell — Skills Reference: Sensor Basics, Relays, Buck Converters, and 12V Wiring**

Document ID: NODE-OC-02\_VC\_Ph2\_SkillsRef\_v1  
 Date: \[Insert Date\]  
 Maintained By: \[David / PSN Project Lead\]

---

## **1\. Purpose**

This document provides quick-reference knowledge for the essential skills and hardware fundamentals required in the Verdant Cell project. It consolidates external resources (articles, datasheets, videos) with project-specific notes for consistent understanding and onboarding.

---

## **2\. Capacitive Soil Moisture Sensors**

* **Principle:** Measures dielectric change in soil; outputs analog voltage proportional to moisture.

* **Best Practices:**

  * Seal exposed electronics with liquid electrical tape.

  * Calibrate each sensor (dry/wet tests) before deployment.

  * Avoid long unshielded cables to minimize noise.

* **Resources:**

  * (🟩 Add link: Datasheet or reference video)

  * (🟩 Add link: Calibration tutorial)

---

## **3\. Relays (5V, Optocoupler-Driven)**

* **Principle:** Low-voltage logic signal triggers an electromechanical switch for higher-current loads.

* **Best Practices:**

  * Use flyback diodes or optocoupled relays for inductive loads.

  * Maintain separation between relay coil supply and logic ground.

  * Document default state (LOW-triggered vs HIGH-triggered).

* **Resources:**

  * (🟩 Add link: Relay basics tutorial)

  * (🟩 Add link: Arduino relay control example)

---

## **4\. Buck Converters (DC-DC Step Down)**

* **Principle:** Uses switching regulation to drop 12V to 5V or 3.3V efficiently.

* **Best Practices:**

  * Select converters rated for \>2× expected current.

  * Verify ripple voltage and adjust potentiometer before wiring into system.

  * Mount in ventilated location if continuous high load.

* **Resources:**

  * (🟩 Add link: Buck converter basics video)

  * (🟩 Add link: Datasheet of chosen unit)

---

## **5\. 12V Wiring & Distribution**

* **Principle:** Provides common power rail for relays, sensors, and environmental hardware.

* **Best Practices:**

  * Color-code wires (red \= \+12V, black \= GND).

  * Use fuse/breaker protection at source and branch circuits.

  * Service loops and clamps for mechanical reliability.

  * Ensure wire gauge matches load requirements.

* **Resources:**

  * (🟩 Add link: 12V wiring tutorial)

  * (🟩 Add link: Automotive/marine wiring reference)

---

## **6\. Quick Troubleshooting Notes**

* **Relays not firing?** Check input logic level and coil supply.

* **Soil readings unstable?** Verify waterproofing, shorten wire, add smoothing capacitor.

* **Buck converter overheating?** Reduce load or upgrade converter.

* **12V bus noise?** Add filtering capacitor across rails.

---

## **7\. Next Updates**

* Insert verified resource links (YouTube tutorials, datasheets).

* Expand with schematic examples once Verdant Cell integration stabilizes.

* Add cross-reference to \[Wiring & Assembly Notes\] (🔵 link).

---

Would you like me to export this as a **Word doc (.docx)** like we did with red, so you can start filling in the

