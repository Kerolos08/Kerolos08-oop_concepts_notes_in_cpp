# First Principle/Concept of OOP: Abstraction

<aside>
🧠

Hide complexity, show the essentials

</aside>

### What is **Abstraction?**

- **Abstraction** is the concept of **hiding complex implementation details** and **showing only the essential features** of an object or system. It allows you to focus on *what* an object does rather than *how* it does it.

### How it works?

Example:

```cpp
class CoffeeMachine {
public:
    void MakeCoffee() {
        BoilWater();
        Brew();
        Pour();
    }

private:
    void BoilWater() {
        // Complex code to boil water
    }

    void Brew() {
        // Brew coffee beans
    }

    void Pour() {
        // Pour into cup
    }
};
```

Imagine you’re using a **real coffee machine** at home:

- You press one button “Make Coffee”
- You don’t see:
    - How it boils the water
    - How it grinds the beans
    - How it pours into the cup

So code showing — **you only interact with the simple button** (`MakeCoffee()`), while the **complex work is hidden inside** the machine (in `BoilWater()`, `Brew()`, and `Pour()`).

“I told the machine to make coffee. I don’t care how it does it — I just want my coffee.”

### **The Beauty of Abstraction**

You **don’t need to understand the full code** to use it, Just use it without needing to know how it works internally.
