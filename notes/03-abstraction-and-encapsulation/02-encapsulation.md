# Second Principle/Concept of OOP: Encapsulation

<aside>
🧠

> Protect the data
> 
</aside>

### What is **Encapsulation?**

- **Encapsulation** is an OOP principle that refers to **wrapping the data (variables) and the code (methods) that operates on the data into a single unit**, usually a **class**, and **restricting direct access to some of the object's internal components**. This helps enforce a controlled interface for interacting with the object.

### Key Concepts of Encapsulation:

1. **Data Hiding**:
    - You can **hide internal object details** from the outside world by using **access modifiers** like `private`, `protected`, and `public`.
    - This prevents external code from directly accessing or modifying the internal state in unsafe ways.
2. **Access Control**:
    - Access to class members is controlled using:
        - `private`: Accessible only within the class.
        - `protected`: Accessible within the class and its subclasses.
        - `public`: Accessible from anywhere.
3. **Getter and Setter Methods**:
    - These methods are used to read (get) or modify (set) private fields in a controlled way.

### Benefits of Encapsulation:

- **Improved security**: Internal state is protected from unintended interference.
- **Flexibility and maintainability**: You can change internal implementation without affecting external code.
- **Modular code**: Code is more modular and easier to manage or test.
