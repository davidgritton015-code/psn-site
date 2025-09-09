# **Clean, durable hierarchy**

* **Network:** PSN (the umbrella)

* **Node:** the physical site  
   Format: `NODE-[Region/City]-[##]` → e.g., `NODE-OC-01`

* **Project:** a functional build under a node  
   Short code \+ readable name

* **Phase:** scoped milestone *within a project* (design → build → install → ops)

* **Docs/Files:** prefixed with `NODE/PROJECT/PHASE` so search stays sane

# **Apply it to what you have now**

* **Network:** `PSN`

* **Node (your backyard):** `NODE-OC-01`

* **Project 1 (solar charging station):**  
   Code: `EC` • Name: **Ember Core**  
   Phases (example):

  * `EC-P1` Planning & parts

  * `EC-P2` Build (your big doc \+ Skills Corner)

  * `EC-P3` Install & commissioning (shorter, case-study style)

* **Project 2 (vertical growth wall):**  
   Code: `GW` • Name: **Grow Wall** (placeholder; change anytime)  
   Phases (proposed):

  * `GW-P1` Concept & layout

  * `GW-P2` Build

  * `GW-P3` Ops (timers \+ AI advisory loop)

# **How to tag your current docs (no rewrites, just headers/filenames)**

* Build doc (Phase 2):  
   `NODE-OC-01_EC-P2_Build-Guide.md`

* Skills Corner (shared resource):  
   `NODE-OC-01_Shared_Skills-Corner.md` *(lives at node level; multiple projects can reference)*

* Phase 3 doc (skeleton later):  
   `NODE-OC-01_EC-P3_Install-&-Commissioning.md`

# **Inside the docs (first line tag)**

Add a tiny header so screenshots and exports keep traceable:

yaml  
CopyEdit  
`PSN • NODE-OC-01 • Project: Ember Core (EC) • Phase: P2 • Rev A`

# **IDs for parts/photos (optional but handy later)**

* Photos: `EC-P2_IMG_####.jpg`

* Diagrams: `EC-P2_DGM_###.png`

* BOM: `NODE-OC-01_EC_BOM_v1.xlsx`

# **Migration note**

Don’t rename public titles; just add the IDs at the top and update filenames going forward. Zero disruption, max clarity.

