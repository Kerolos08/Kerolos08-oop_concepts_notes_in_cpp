# Fourth Principle/Concept of OOP: Polymorphism

> **One interface, many behaviors.**
> 

## Polymorphism

- Polymorphism lets you **use a single interface** (like a function name or base class pointer) to **work with different types of objects**.
- In C++, it’s what allows **one function call** to trigger **different behaviors** depending on the type of object that’s calling it.

## Types of Polymorphism

### 1. **Compile-time polymorphism (Static Binding / Early Binding)**

This happens **during compilation** — the compiler knows exactly which function to call.

Examples:

- **Function overloading** → multiple functions with the same name but different parameters.
- **Operator overloading** → redefine how operators (like `+`, `==`, etc.) work for custom classes.

### 2. **Runtime polymorphism (Dynamic Binding / Late Binding)**

This happens **while the program is running**, and the function call is resolved at **runtime** — not compile time.

It’s achieved through:

- When we create a **base class pointer** and make it point to a **derived class object**, and the function is virtual, the **derived class version** gets called at **runtime** — not compile time.

## Quiz

- **Why Polymorphism? Polymorphism allows us to create consistent code.**
    - **Yes.**

- **Polymorphism is one of the important features/principles/concepts of OOP, word Ploy means "Many" and word Morphism means "Form" so it means "Many Forms", the ability to take more than one form.**
    - **Yes.**

- **We can achieve Polymorphism through:**
    - **Function Overloading, Operator Overloading, Overriding, Virtual Methods.**