# **⚡ PSN Cell Phase 2: Project Launch – Solar Charging Station**

### **🎯 Project Goal**

Build a low-voltage, self-contained solar power station capable of charging small devices (USB), powering 12V equipment (pumps, sensors, lighting), and acting as a scalable foundation for larger DC or AC loads.

---

## **✅ System Overview**

* **Type:** 12V DC solar microgrid

* **Use Cases:**

  * Charge phones, radios, tablets

  * Power irrigation timers, fans, microcontrollers

  * Run LED grow lights for food systems

* **Scalability:**

  * Add batteries, panels, inverter later

  * Modular components for easy upgrades

---

## **🧰 Core Components**

| Component | Notes / Options |
| ----- | ----- |
| Solar Panel (100–300W) | Monocrystalline preferred for size efficiency |
| Charge Controller | MPPT recommended for efficiency; PWM acceptable |
| 12V Battery (AGM or LiFePO4) | Deep cycle preferred; size based on power needs |
| Power Distribution Block | Optional; helps manage multiple outputs |
| USB/DC Output Modules | Can be panel-mounted or built into a box |
| Fusing / Protection | Inline fuse or fuse block based on output rating |
| Wiring / Connectors | SAE, Anderson, or MC4 depending on modularity goals |
| Enclosure / Mounting | Weather-resistant box, or PVC pipe frame \+ panel |

Would you like links to recommended components or to source your own?

---

## **🧪 Design Variants (Pick One)**

**A. Rugged Crate System (portable)**

* All components housed in a modified plastic storage crate

* Fold-up panel or folding stand

* Ideal for mobility or job-site use

**B. Fixed Testbed (stationary yard unit)**

* Solar panel mounted on PVC or wood stand

* Components housed in weatherproof box

* Prepped for future expansion (inverter, outlets)

**C. Wall-Mounted Utility Panel (garage/sideyard)**

* Mount solar controller \+ outputs on a plywood panel

* Neat, visible layout for easy learning and documentation

* Tied into yard/planting space

Want a sketch or concept drawing of any of these?

---

## **⚠️ Safety & Planning Notes**

* Always fuse battery output lines

* LiFePO4s often need a low-temp disconnect or BMS

* Battery box should have ventilation if sealed

* Consider shade and panel angle (especially during summer solstice)

---

## **📋 Next Steps**

1. **Choose Design Variant (A, B, or C)**

2. (Optional) Request sourcing links or BOM spreadsheet

3. I’ll generate:

   * Your **Phase 2 Summary Document**

   * A visual layout or schematic (if requested)

   * Custom Bill of Materials (.xlsx)

## **🔧 Product Recommendations**

Here are ideal components to kick off Phase 2\. These are available now and align with quality, price, and modularity:

* **Renogy 200 W Solar RV Kit** – A full solar kit (panel, cables, MC4 connectors) for \~$240—great value.

* **Renogy Rover 20 A MPPT Charge Controller** – Efficient MPPT control, well-reviewed, about $63.

* **Renogy 12 V 100 Ah Deep‑Cycle AGM Battery** – Reliable 100 Ah capacity, \~$178.

Renogy 200 W Solar RV Kit

Complete panel kit

Renogy 200 W Solar RV Kit

$239.99

Home Depot \+ others

★★

4.8

Renogy Rover 20 A MPPT Charge Controller

Efficient MPPT controller

Renogy Rover 20 A MPPT Charge Controller

$63.44

Home Depot \+ others

★★

4.6

Renogy 12 V 100 Ah AGM Battery

Deep‑cycle battery

Renogy 12 V 100 Ah AGM Battery

$177.66

Amazon.com \+ others

★★

4.5

Ask about this

ChatGPT chooses products independently. Learn more

---

## **📦 Bill of Materials & Links**

| Item | Estimated Cost |
| ----- | ----- |
| Renogy 200 W panel kit | $239.99 |
| Renogy Rover 20 A MPPT controller | $63.44 |
| Renogy 12 V 100 Ah AGM battery | $177.66 |
| Additional mounting & enclosure items\* | \~$50–$100 |
| **Subtotal (core)** | **\~$530** |
| **Projected Total (with extras)** | **$600–650** |

\*Extras include fuse blocks, DC distribution, 12–15 AWG wiring, inline fuses, and a weatherproof enclosure.

---

## **🖼 Concept Visualization**

java

CopyEdit

        `___ 200 W Panel (roof or yard mounted at ~20° tilt)`

        `|   |`

        `+---+`

          `|`

      `[MC4 Cable]`

          `|`

    `[Rover MPPT Controller]──[Battery]`

          `|                     |`

     `12 V Output              12 V Load Outputs (USB + DC bus)`

     `(fused, distribution block)`

          `|`

    `12 V DC Load (pump, sensor, LED)`

* **Mounting**: Single panel on PVC or wood stand sloped south at \~20°.

* **Controller Box**: Weatherproof enclosure (like an outdoor junction box).

* **Battery Placement**: Near controller, with ventilation if using AGM.

* **Load Side**: Fuse block feeding USB modules, 12 V outlets, future sensors/pumps.

---

## **⚙️ Sourcing & Setup Details**

* Panel kit includes mounting hardware and connectors.

* Controller is Bluetooth-capable for tuning and monitoring.

* Battery is maintenance-free AGM, no BMS needed initially.

* Extras sourced from Home Depot / Lowes: enclosure box, fuse block, 12 AWG cable.

* **Total lead time**: 1–2 weeks depending on shipping.

---

## **🛡 Safety & Standards**

* Add inline fuse on **both** panel-to-controller and controller-to-battery lines—as mentioned in Low‑Tech Magazine’s guide. [alternative-energy-tutorials.com+3solar.lowtechmagazine.com+3pvcase.com+3](https://solar.lowtechmagazine.com/2023/12/how-to-build-a-small-solar-power-system/?utm_source=chatgpt.com)[altestore.com](https://www.altestore.com/pages/schematics-wiring-solar-panels-and-batteries-in-series-and-parallel?srsltid=AfmBOorR9S2WKml2DwfajixL3Y50YHw57ikVtI3TLReqfWvhNX48LP1N&utm_source=chatgpt.com)

* Keep battery properly vented and secured.

* Use properly sized fuse rated for panel/controller current.

* Angle panel to match your latitude (\~33° for Orange County) to maximize output [pfnexus.com](https://www.pfnexus.com/blog/solar-project-development-process?utm_source=chatgpt.com).

---

## **✅ Next Steps**

1. Confirm or adjust component choices.

2. I’ll generate a **Phase 2 Summary Document**, including:

   * Schematic

   * BOM spreadsheet

   * Ordering links

3. When parts arrive:

   * You assemble and photo-document

   * We iterate build docs and plan for next Pillar

