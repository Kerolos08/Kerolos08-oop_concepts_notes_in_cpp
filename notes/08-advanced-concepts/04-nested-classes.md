# Nested Classes

## Concept

basically a **class defined inside another class**, but they are still considered **two separate classes**.

They just happen to live **inside each other’s scope**.

- The **outer class** is the main class.
- The **nested (inner) class** is *defined inside* the outer one, so it’s part of the outer class’s **scope**, but it’s still a **completely independent class**.

### Syntax

```cpp
class Outer {
public:
    class Inner {
    public:
        void Function()
	       {
	       //body 
	       }
    };
};
```

### Important Points

1. **They don’t share private access automatically.**
    
    The outer class **cannot** access the private members of the inner class unless:
    
    - The outer class is declared as a `friend` inside the inner class, or
    - The inner class exposes its members publicly.
2. **The inner class can be public, private, or protected.**
    - If it’s `private`, you can’t use it outside the outer class.
    - If it’s `public`, it can be used like `OuterClass::InnerClass`.
3. **They are separate types.**
    
    You must specify the full name when using them outside:
    
    ```cpp
    OuterClass::InnerClass obj;
    ```
    
4. **They’re useful for grouping related logic.**
    
    If a small class is only meaningful *inside* another class, you can nest it for better organization.
    

## Initializer List

When a class contains another class as a **member object**, the compiler must construct all member objects **before** executing the body of the outer class’s constructor.

If the inner class **does not have a default constructor**, the outer class must explicitly specify **how to construct** that member object — and this is done through the **initializer list**.

In this case, even though the member object is declared without parameters inside the class, the compiler already knows **how to build it** because the initializer list tells it which constructor and arguments to use.

### Construction Flow:

1. When you create an object of the outer class, the compiler first checks all its member objects.
2. For each member object, it looks at the initializer list to see **how it should be constructed**.
3. Each member object is fully constructed **before** entering the body of the outer class constructor.

### Example:

```cpp
class Person {
    class Address {
    public:
        Address(string street, string city) { /* ... */ }
    };

    Address address;

public:
    Person(string s, string c) : address(s, c) {
        // body runs *after* address is constructed
    }
};

```

### When Inheriting (Base Class Case)

- In inheritance, the **derived class object** contains a **base class subobject** inside it.
- But when the derived class’s constructor starts, **that subobject doesn’t exist yet** — it has to be *built first*.
- So the initializer list is telling the compiler *how* to construct that base-class part **as the object is being created**.

That’s why we use the **base class name** in the initializer list:

```cpp
class Derived : public Base {
public:
    Derived(int x) : Base(x) { }  // Base part is built here
};

```

Here, `Base(x)` isn’t calling an existing object — it’s *defining how the base part will be constructed*

during the creation of the derived object.

So yes, it’s like giving the **blueprint** for how to build that part of the final object.

---

### When Composing (Member Object Case)

- In composition, the member object (for example, `Address addr;`) is **already declared inside the class**.
- So when the outer object (e.g. `Person`) starts constructing, the compiler *already knows* that `addr` exists — it just needs to initialize it with the right values.
- That’s why we call it by **name**, not by type:

```cpp
class Person {
    Address addr;  // already declared
public:
    Person(string city) : addr(city) { }  // initialize this existing member
};

```

Here `addr(city)` means:

> “Initialize the already-existing member `addr` with this argument.”
> 

If you wrote `Address(city)` instead, you’d just create a *temporary object* — not the one that actually lives inside `Person`.

## Quiz

- **Nested or Inner Classes : A class can also contain another class definition inside itself, which is called “Inner Class” in C++.**
    - **True.**

- **In the case of nested of inner classes, the containing class is referred to as the “Enclosing Class”. The Inner Class definition is considered to be a member of the Enclosing Class.**
    - **True.**

- **An Inner class is a member and as such has the same access rights as any other member of the enclosure class.**
    - **True.**

- **The members of an enclosing class have no special access to members of a nested class; the usual access rules shall be obeyed.**
    - **True.**