# 💳 Payment Processor System

A modular C++ application designed using **SOLID Principles**, demonstrating a flexible and extensible **payment processing system** with multiple payment methods, discount strategies, and logging functionalities.

---

## 🧱 Architecture Overview

<img width="345" alt="Screenshot 2025-04-06 at 11 45 06 AM" src="https://github.com/user-attachments/assets/4b069a0d-5a71-429f-bd69-c8b749d0f0a9" />

---
## Directory Structure

PaymentProcessor/
│── src/
│   ├── payments/
│   │   ├── IPaymentMethod.hpp
│   │   ├── CreditCardPayment.hpp
│   │   ├── CreditCardPayment.cpp
│   │   ├── PayPalPayment.hpp
│   │   ├── PayPalPayment.cpp
│   │   ├── UPIPayment.hpp
│   │   ├── UPIPayment.cpp
│   │   ├── CryptoPayment.hpp
│   │   ├── CryptoPayment.cpp
│   ├── discounts/
│   │   ├── IDiscount.hpp
│   │   ├── NoDiscount.hpp
│   │   ├── NoDiscount.cpp
│   │   ├── PercentageDiscount.hpp
│   │   ├── PercentageDiscount.cpp
│   ├── logger/
│   │   ├── ILogger.hpp
│   │   ├── ConsoleLogger.hpp
│   │   ├── ConsoleLogger.cpp
│   ├── PaymentProcessor.hpp
│   ├── PaymentProcessor.cpp
│── main.cpp
│── Makefile

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


