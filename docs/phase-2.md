# Phase 2 — Ember Core (Solar Charging Station)

**Goal:** Build and document a modular, outdoor 12V solar charging station with clean routing, service loops, and future expandability.

## Current Status
- Panels → Controller → Battery → Fuse block ✅
- Breakers installed at key points (panel→ctrl, ctrl→batt, ctrl→fuse) ✅
- Inverter terminal fuse arrived; Phase 3 to start soon

## Design Notes
- Service loops for PV and battery wiring; tight runs for board-mounted components
- Color code: Yellow = PV; Battery = +/−; Load = +/−
- Outdoor/marine-durable hardware; simple fasteners (P-clamps / UV zip ties)

## BOM (snapshot)
- Blue Sea Systems Blade Fuse Block
- Surface-Mount USB + 12V Socket
- 20A waterproof breakers (x3)
- Inverter terminal fuse

> Photos go in `docs/assets/images/phase-2/` and link them here.
