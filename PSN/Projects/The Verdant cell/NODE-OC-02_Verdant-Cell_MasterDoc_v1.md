Document ID: NODE-OC-02\_Verdant-Cell\_MasterDoc\_v2  
 Date Updated: 2025-09-06  
 Maintained By: AI-led Collaboration with Human Builder | PSN DevOps

# **Project Overview**

**Summary:**  
 The Verdant Cell is the second operational project of the PSN initiative. It expands on the foundational concepts of the Ember Core by integrating automated hydroponic food production. Designed for modularity and environmental control, this self-contained grow system supports year-round, off-grid plant cultivation. It incorporates microcontroller-based automation to manage lighting, airflow, humidity, and moisture-based watering—optimized for minimal user input and maximum reliability.

**Primary Objectives:**

* Create a compact, automated hydroponic system for vertical indoor grow shelves.

* Use Arduino-based control logic with manual overrides for reliability and flexibility.

* Maintain clear, replicable documentation and build processes using widely available components.

---

# **Phase Index & Navigation**

## **Phase 1 – Concept Development & Requirements**

**Summary:**  
 Initial planning of the Verdant Cell system including:

* Identifying key automation needs (lighting, ventilation, humidity, moisture, irrigation).

* Choosing modular, accessible components for rapid prototyping and upgrade paths.

* Establishing the baseline environmental needs based on intended crops.

**Documents:**

* [\[Phase 1 Concept & Goals\]](https://docs.google.com/document/d/1aHH4wSO-yO1vd_vuZLjFDe3Ki2ItyHFUcmN9SztTOeg/edit?usp=drive_link)

* [\[Core Component Selection Notes\]](https://docs.google.com/document/d/1ivQX9E-SQi3223ALnhX_cLDjPEp7DUl_YPgOho1Odws/edit?usp=drive_link)

* [\[Initial BOM\]](https://docs.google.com/spreadsheets/d/1nsoeNcDopFrQnJAn26pH4ueQ4BcHEl4xNM0C6SZ-ebA/edit?usp=drive_link)

---

## **Phase 2 – Build & Prototyping**

**Summary:**  
 Hands-on development of the control system using Arduino UNO for prototyping. Includes sensor validation, relay control wiring, and construction of the physical layout within the shelf unit. Ends with transition planning to Arduino Nano for permanent integration.

**Documents:**

* [\[Wiring & Assembly Notes\]](https://docs.google.com/document/d/1J5eA34nDeCOUqie54FZAIN5HIyPyeTCGnYmTj4fXf4E/edit?usp=sharing)

* [\[Relay Mapping / GPIO Table\]](https://docs.google.com/document/d/1F71C-th7oZnTE55T3MGyoLgALuRcDaZI/edit?usp=drive_link&ouid=108834023243763923597&rtpof=true&sd=true)

* \[Project 2 System Diagram – v1.2\]

* [\[Skills Reference: Sensor Basics, Relays, Buck Converters, and 12V Wiring\]](https://docs.google.com/document/d/1jLFeOHBZx_BO27GLaYRrMN6H1Yiy3l3GqHbRZ009sqU/edit?usp=sharing)

* [\[Phase 1.1.2 System Integration Snapshot – PDF\]](https://docs.google.com/document/d/1Fh9YbKs-8oRdPxshONQ3_8_rojLkcFdOz-BfnPNLXSk/edit?usp=drive_link)

* [\[Finalized Wiring Diagram (Lucidchart)\]](https://lucid.app/lucidchart/9f1d99d7-4dde-48b1-86f2-aa837a99e805/edit?viewport_loc=-1321%2C-1031%2C4785%2C3685%2C1wOI1DT5zKPW&invitationId=inv_aeb6c613-5378-480b-98a1-ece39ee970f1)

* [\[Phase 2 BOM v1.0 – Google Sheet\]](https://docs.google.com/spreadsheets/d/1nsoeNcDopFrQnJAn26pH4ueQ4BcHEl4xNM0C6SZ-ebA/edit?usp=drive_link)

---

### **Phase 1.1 – Arduino System Integration (Embedded in Phase 2\)**

**Includes:**

* Sensor calibration

* OLED \+ SHT31-D \+ RTC setup

* Relay I/O validation

* Breadboard-to-terminal transition

* Soil sensor protection

* Panel-mounted wiring

* Final integration snapshot

**Documents:**

* [\[Phase 1.1.2 Final Snapshot – PDF\]](https://docs.google.com/document/d/1Fh9YbKs-8oRdPxshONQ3_8_rojLkcFdOz-BfnPNLXSk/edit?usp=drive_link)

* [\[Power Routing Diagram – Lucidchart\]](https://lucid.app/lucidchart/9f1d99d7-4dde-48b1-86f2-aa837a99e805/edit?viewport_loc=-5099%2C-4651%2C13908%2C10709%2CF26IqNUY0e9Q&invitationId=inv_aeb6c613-5378-480b-98a1-ece39ee970f1)

---

## **Phase 3 – Integration & Testing**

**Summary:**  
 Installation of sensors and environmental hardware into the grow environment. Watering automation behavior established through soil moisture feedback loops. Environmental tuning (light cycles, humidity thresholding, fan control) begins.

**Documents:**

* \[System Commissioning Notes\]

* \[Time-Control vs Sensor-Control Behaviors\]

* \[Test Logs – Fan / Mist Pump / Light Control\]

* \[Phase 3 Commissioning Template – Google Doc\] (🟩 Add link)

* \[Verdant Cell Test Logs – Google Sheet\] (🟩 Add link)

---

## **Phase 4 – Optimization & Scaling**

**Summary:**  
 Iterative refinement of system behaviors to match specific plant species. Addition of advanced features such as light spectrum tuning, multi-zone control, or camera monitoring can be evaluated here. Also serves as a template for future Verdant Cell replications.

**Documents:**

* \[Future Expansion Wishlist\]

* \[Multi-Shelf Scaling Guide\] (🟩 Add link)

* \[Optional AI Vision Add-On (Planning Notes)\] (🟩 Add link)

* \[Light Spectrum Tuning Notes\] (🟩 Add link)

---

# **Supporting Information**

* \[PSN Naming Conventions – Shared Style Guide\] (🟩 Add link)

* \[PSN Project Template – Editable Copy\] (🟩 Add link)

* \[BOM Repository – Google Sheet\]

* \[System Diagram Reference – PDF or Lucid\] (🟩 Add link)

* \[PSN Anchor Prompt Reference – Internal Use Only\] (🟩 Add link)

