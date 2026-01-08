# Smart Inventory & Billing Management System (SIBS)

A C++ console-based application that simulates inventory management and billing
for a small retail setup. The project focuses on clean architecture, data
integrity, and safe state transitions rather than UI complexity.

## Features
- Add and view products with unique product IDs
- Controlled billing with stock validation
- File-based persistence (data survives restarts)
- Low-stock alerts for better reliability

## Design Highlights
- Inventory acts as the single source of truth
- Billing requests inventory changes; it does not own data
- Product ID uniqueness enforced at input boundary
- Persistence handled only at safe checkpoints

## Tech Stack
- C++
- STL (vector, string)
- File I/O (ifstream, ofstream)
- Git & GitHub

## How to Run
```bash
g++ src/main.cpp src/inventory.cpp src/billing.cpp -o app
./app
