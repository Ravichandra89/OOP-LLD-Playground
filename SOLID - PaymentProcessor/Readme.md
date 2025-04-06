# 💳 Payment Processor System

A modular C++ application designed using **SOLID Principles**, demonstrating a flexible and extensible **payment processing system** with multiple payment methods, discount strategies, and logging functionalities.

---

## 🧱 Architecture Overview

<img width="345" alt="Screenshot 2025-04-06 at 11 45 06 AM" src="https://github.com/user-attachments/assets/4b069a0d-5a71-429f-bd69-c8b749d0f0a9" />

---
## Directory Structure

PaymentProcessor/├── src/│ ├── payments/ # 💰 Payment Method Interfaces & Implementations│ │ ├── IPaymentMethod.hpp # Base payment interface│ │ ├── CreditCardPayment.hpp # Credit Card payment method│ │ ├── CreditCardPayment.cpp│ │ ├── PayPalPayment.hpp # PayPal payment method│ │ ├── PayPalPayment.cpp│ │ ├── UPIPayment.hpp # UPI payment method│ │ ├── UPIPayment.cpp│ │ ├── CryptoPayment.hpp # Crypto payment method│ │ ├── CryptoPayment.cpp││ ├── discounts/ # 🎁 Discount Strategies│ │ ├── IDiscount.hpp # Base discount interface│ │ ├── NoDiscount.hpp # No discount strategy│ │ ├── NoDiscount.cpp│ │ ├── PercentageDiscount.hpp # Percentage-based discount│ │ ├── PercentageDiscount.cpp││ ├── logger/ # 📋 Logging Interfaces│ │ ├── ILogger.hpp # Logger interface│ │ ├── ConsoleLogger.hpp # Console-based logger│ │ ├── ConsoleLogger.cpp││ ├── PaymentProcessor.hpp # Core processor interface│ ├── PaymentProcessor.cpp # Core processor implementation│├── main.cpp # 🚀 Main entry point├── Makefile # 🔧 Build configuration

---

## ✅ Features

- Supports multiple **payment methods**:
  - Credit Card
  - PayPal
  - UPI
  - Crypto

- Supports **discount strategies**:
  - Percentage Discount
  - Flat Discount
  - No Discount

- Uses **ConsoleLogger** for transaction logging

- Clean **interface segregation** and **open/closed** design for easy extension

---

## 🧠 SOLID Principles Used

| Principle | Description |
|----------|-------------|
| **S** - Single Responsibility | Each class has one clear responsibility |
| **O** - Open/Closed           | System can be extended without modifying existing code |
| **L** - Liskov Substitution  | Derived classes can replace base class references |
| **I** - Interface Segregation| Small, specific interfaces (e.g., `IPaymentMethod`, `IDiscount`) |
| **D** - Dependency Inversion | High-level modules depend on abstractions, not concrete classes |

---

## ⚙️ Build & Run

### 🔧 Compile via `g++` (manual)

```bash
g++ -std=c++17 -Wall -I./Src \
    Src/Payments/*.cpp \
    Src/Discounts/*.cpp \
    Src/logger/*.cpp \
    Src/PaymentProcessor.cpp \
    main.cpp \
    -o payment_app


