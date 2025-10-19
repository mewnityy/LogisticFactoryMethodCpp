# LogisticFactoryMethodCpp
┌────────────────────────────┐
│         BaseLogistic       │  ← Абстрактна фабрика
│ ────────────────────────── │
│ + planDelivery(): string   │
│ + createTransport():       │
│   Transport* (pure virtual)│
└────────────┬───────────────┘
             │
 ┌───────────▼────────────┐
 │      RoadLogistic      │  ← Створює Truck
 │ + createTransport():   │
 │   Transport* override  │
 └───────────┬────────────┘
             │
       ┌─────▼─────┐
       │   Truck   │  ← deliver(): string override
       └───────────┘

 ┌───────────▼────────────┐
 │      SeaLogistic       │  ← Створює Ship
 │ + createTransport():   │
 │   Transport* override  │
 └───────────┬────────────┘
             │
       ┌─────▼─────┐
       │   Ship    │  ← deliver(): string override
       └───────────┘

 ┌───────────▼────────────┐
 │      AirLogistic       │  ← Створює Plane
 │ + createTransport():   │
 │   Transport* override  │
 └───────────┬────────────┘
             │
       ┌─────▼─────┐
       │   Plane   │  ← deliver(): string override
       └───────────┘

 ┌───────────▼────────────┐
 │     RailLogistic       │  ← Створює Train
 │ + createTransport():   │
 │   Transport* override  │
 └───────────┬────────────┘
             │
       ┌─────▼─────┐
       │   Train   │  ← deliver(): string override
       └───────────┘
