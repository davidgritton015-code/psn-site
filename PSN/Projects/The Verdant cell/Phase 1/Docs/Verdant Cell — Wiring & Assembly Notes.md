# **Verdant Cell — Wiring & Assembly Notes**

Document ID: NODE-OC-02\_VC\_Ph2\_WiringAssembly\_v1  
 Date: \[Insert Date\]  
 Maintained By: \[David / PSN Project Lead\]

---

## **1\. Overview**

This document captures the wiring and assembly practices for Phase 2 of the Verdant Cell project. It includes details on cable routing, termination methods, assembly hardware, and verification steps to ensure a clean, reliable, and replicable build.

---

## **2\. Wiring Standards & Conventions**

* **Color Codes:**

  * Yellow \= Solar PV (positive/negative)

  * Red \= Battery Positive

  * Black \= Battery/Load Negative (Ground)

  * Blue \= Sensor signal (analog/digital)

* **Wire Types:**

  * 22 AWG stranded silicone wire for low-current signals

  * 18 AWG stranded copper for relay-controlled 12V loads

  * 10–12 AWG stranded copper for battery and breaker connections

* **Termination Methods:**

  * Ferrule crimping for stranded wire into screw terminals

  * Insulated ring/spade lugs for breaker and fuse block connections

  * JST-XH connectors for modular sensor harnesses

---

## **3\. Assembly Practices**

* **Routing:** Service loops added for strain relief and maintenance flexibility.

* **Bundling:** Cable ties and UV-rated clamps used to secure and organize runs.

* **Labeling:** Each connection labeled with Brother P-Touch system, matching pinout references.

* **Protection:** Liquid electrical tape used for soil sensor PCB waterproofing.

---

## **4\. Panel Assembly**

* **Mounting:**

  * Breakers, terminal blocks, and fuse block secured to plywood project board.

  * Layout arranged to visually follow power flow (PV → Controller → Battery → Fuse Block → Loads).

* **Integration Points:**

  * Fan wiring pre-routed and labeled for later plug-in.

  * Arduino mounted separately with breadboard for prototyping, pending Nano transition.

---

## **5\. Verification Steps**

* Confirm polarity at each terminal with multimeter before energizing.

* Verify breaker/fuse ratings match load requirements.

* Perform load test on 12V distribution block before sensor integration.

* Confirm stable voltage supply during relay actuation and sensor operation.

---

## **6\. Lessons Learned**

* Adding service loops early prevents rewiring during integration.

* Waterproofing soil sensors before installation avoids rework.

* Using ferrules improves reliability when frequently inserting/removing wires during test cycles.

---

## **7\. Next Updates**

* Integrate final fan wiring once hardware is installed.

* Add grow light wiring details once Phase 1.2 begins.

* Document Arduino Nano transition once breadboard phase is complete.

---

