# ECommerceBackend

A modular, C++-based e-commerce backend system designed with **SOLID principles** for scalability, maintainability, and extensibility. This project implements core e-commerce domains—**Orders, Payments, Shipments, Promotions, and Users**—along with advanced features like **event sourcing**.

---

## 🚀 Features

### ✅ Core Domains:
- **Orders**
- **Payments**: PayPal, Credit Card
- **Shipments**: FedEx
- **Promotions**: Percentage-based Discount
- **Users**

## UML Class Diagram
<img width="221" alt="Screenshot 2025-04-06 at 1 17 13 PM" src="https://github.com/user-attachments/assets/ef9b86df-7410-41b1-81c2-e01f9de861d5" />


### 🧠 SOLID Principles in Action:
## 🧱 SOLID Principles in ECommerceBackend

### 🔹 Single Responsibility Principle (SRP)
- **Role**: Each class has one job.
- **Examples**:
  - `UserService`: Retrieves and manages users.
  - `PayPalPayment`: Handles PayPal payment processing.
  - `EventStoreImpl`: Manages event storage.
- **Benefit**: Isolated changes (e.g., PayPal API update) only affect the relevant class.

---

### 🔸 Open/Closed Principle (OCP)
- **Role**: Extend functionality without modifying existing code.
- **Examples**:
  - Add `CryptoPayment` or `UPSShipping` by implementing `IPayment`/`IShipping`.
  - No need to change `OrderService`.
- **Benefit**: Easily plug in new features, reducing the risk of breaking existing logic.

---

### 🔹 Liskov Substitution Principle (LSP)
- **Role**: Subtypes can replace base types without breaking functionality.
- **Examples**:
  - Use `CreditCardPayment` in place of `PayPalPayment` within `OrderService`.
- **Benefit**: Ensures flexibility, consistency, and reliability across interchangeable components.

---

### 🔸 Interface Segregation Principle (ISP)
- **Role**: Prefer small, specific interfaces to avoid forcing irrelevant method implementations.
- **Examples**:
  - `IPayment` only requires a `process()` method — no shipping or logging responsibilities.
- **Benefit**: Classes implement only what they need, keeping code clean and modular.

---

### 🔹 Dependency Inversion Principle (DIP)
- **Role**: High-level modules depend on abstractions, not concrete implementations.
- **Examples**:
  - `OrderService` relies on interfaces like `IOrderRepo`, `IPayment`, `IEventStore`, etc.
  - Implementations are injected at runtime.
- **Benefit**: Swap dependencies (e.g., in-memory repo to database repo) without touching the core business logic.

---


### ⚙️ Advanced Add-ons:
- **Event Sourcing**: Tracks state changes using `IEventStore`.
- *(Pluggable support for caching and webhooks can be added easily.)*


## 🛠️ Prerequisites

- **Compiler**: C++11 or higher (e.g., `g++`)
- **OS**: Tested on **macOS/Linux** (Windows compatible with minor changes)

---

## ⚙️ Setup

### 📥 Clone the Repository

```bash
git clone <repository-url>
cd ECommerceBackend

make         # Builds and runs the application
make clean   # Cleans build artifacts
```

## Manally Compliation 
```bash
g++ -std=c++11 -I./src \
    src/users/UserService.cpp \
    src/users/UserRepoImpl.cpp \
    src/orders/OrderService.cpp \
    src/orders/OrderRepoImpl.cpp \
    src/payments/PayPalPayment.cpp \
    src/payments/CreditCardPayment.cpp \
    src/shipments/FedExShipping.cpp \
    src/promotions/PercentDiscount.cpp \
    src/events/EventStoreImpl.cpp \
    main.cpp \
    -o ecommerce

./ecommerce
```

