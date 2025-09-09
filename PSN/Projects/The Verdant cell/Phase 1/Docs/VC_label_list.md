### **📋 Labeling Scope**

**Goal:** Clear, consistent, and minimal labeling to make troubleshooting, upgrades, and documentation effortless without overloading the build with micro-labels.  
 **Standard:** `VC-[Subsystem]-[Component/Position]-[Version]`

* **VC** \= Verdant Cell

* **Subsystem** \= `PWR`, `SNSR`, `CTRL`, `LOAD`

* **Component/Position** \= Short tag (e.g., `BRD`, `PUMP`, `D1`)

* **Version** \= `v1`, `v1.1` if needed later

---

### **🔌 Power (PWR)**

| Label | Description | Notes |
| ----- | ----- | ----- |
| **VC-PWR-BRD** | Power input on the breadboard distribution | Label near terminal connection |
| **VC-PWR-12V** | 12V DC supply into the control system | On the line at panel entry point |
| **VC-PWR-AC** | AC input for lighting circuits | Mark at breaker or junction box |

---

### **🧠 Control (CTRL)**

| Label | Description | Notes |
| ----- | ----- | ----- |
| **VC-CTRL-UNO** | Arduino UNO (main controller) | Small label under board |
| **VC-CTRL-RELAY** | 8-Channel Relay Board | Place near relay header block |
| **VC-CTRL-RTC** | Real-Time Clock (DS3231) | Optional; small and clean |
| **VC-CTRL-OVR** | Manual Override Switch Panel | Mark at panel entry point |

---

### **🌡 Sensors (SNSR)**

| Label | Description | Notes |
| ----- | ----- | ----- |
| **VC-SNSR-M1** | Moisture Sensor \#1 (Leftmost pot) | Mark at connector end |
| **VC-SNSR-M2** | Moisture Sensor \#2 | Match to schematic |
| **VC-SNSR-M3** | Moisture Sensor \#3 |  |
| **VC-SNSR-M4** | Moisture Sensor \#4 (Rightmost pot) |  |
| **VC-SNSR-ENV** | SHT31-D Environmental Sensor | At sensor body or closest point |
| **VC-SNSR-DSP** | OLED Display (SSD1306) | Optional |

---

### **💡 Loads (LOAD)**

| Label | Description | Notes |
| ----- | ----- | ----- |
| **VC-LOAD-L1** | Grow Light \#1 (Top Zone) | Match schematic position |
| **VC-LOAD-L2** | Grow Light \#2 (Bottom Zone) | Match schematic position |
| **VC-LOAD-PUMP** | Pump Circuit (if used later) | Future expansion |
| **VC-LOAD-FAN** | Fan (Future environmental control) | Placeholder for future add-ons |

---

### **📦 Enclosure / Routing**

| Label | Description | Notes |
| ----- | ----- | ----- |
| **VC-PNL-IN** | Main entry point to panel | For troubleshooting |
| **VC-PNL-BUS** | 5V/12V Bus Lines | Group tag, not per-wire |
| **VC-PNL-GND** | Ground Bus | Group tag, not per-wire |

---

### **🛠 Recommendations**

* Use **heat-shrink labels** or **wrap-around adhesive labels** for a durable finish.

* Keep text **short and bold** — e.g., `VC-LOAD-L1`.

* Print **extras** for spares and stick to a single font size for readability.

* Apply labels **near the termination point**, not mid-span, for quick visual confirmation.

---

Would you like me to **generate a printable label list** formatted for a common 12mm label cartridge?

