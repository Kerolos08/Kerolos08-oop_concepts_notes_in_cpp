# Interfaces: Pure Virtual Functions and Abstract Classes

## Interface

- An **interface** is like a **blueprint** — it tells what functions a class *must* have, but **not how** they work.
- interfaces is created using **pure virtual functions**.

## Pure Virtual Function

- A virtual function with **no body** (no implementation)
- Syntax:

```cpp
virtual void Func (int x) = 0 //pure virtual function
//no body
```

- The `= 0` makes it **pure virtual**.
- Every class that **inherits** this class should **define** those **Pure Virtual Functions**.

## Abstract Class

- Any class is said to be abstract if it have at least 1 pure virtual function.
- An abstract class is said to be an interface if it consists entirely of pure virtual functions.
- Every interface is an abstract class, but not every abstract class is an interface.
- In addition to pure virtual functions, abstract classes can have complete functions in them, as well as data members.
- Abstract classes, and thus interfaces, cannot be instantiated (you cannot create objects from them), because they are considered "incomplete", because of the pure virtual functions they have.
- Abstract classes can be thought of as being "partial" interfaces, because they have pure virtual functions in them, despite not consisting entirely of pure virtual functions.

## Example with Code

```cpp
#include <iostream>
using namespace std;

// Abstract Class / InterFace / Contract.
class clsMobile
{
    virtual void Dial (string PhoneNumber) = 0;
    virtual void SendSMS (string PhoneNumber, string Text) = 0;
    virtual void TakePicture () = 0;
};

class clsIphone : public clsMobile
{
    void Dial (string PhoneNumber)
    {

    }
    void SendSMS (string PhoneNumber, string Text)
    {

    }
    void TakePicture ()
    {

    }
};

class clsSamsung : public clsMobile
{
        void Dial (string PhoneNumber)
    {

    }
    void SendSMS (string PhoneNumber, string Text)
    {

    }
    void TakePicture ()
    {

    }
};

int main ()
{
    clsIphone I1;

    clsSamsung sam1;
    
    return 0;
}
```

## Quiz

- **A pure virtual function doesn't have the function body and it must end with = 0.**
    - **True.**

- **If you have one pure virtual function in a class then it will be converted to abstract class.**
    - **True.**

- **Abstract Class is the same concept of Interface Class and they are both contracts.**
    - **True.**

- **Abstract Class/Interface Class is a class with pure virtual functions.**
    - **True.**

- **You can have an object of abstract class.**
    - **No, you can only inherit it.**

- **An abstract class in C++ has at least one pure virtual function by definition. In other words, a function that has no definition.**
    - **True.**

- **The abstract class's descendants (derived classes) must define the pure virtual function; otherwise, it is not allowed and you will get error.**
    - **True.**

- **Derived Classes from abstract class can have extra methods other than the methods in the abstract class.**
    - **Yes, it can have extra methods.**

- **The C++ interfaces are implemented using abstract classes and these abstract classes should not be confused with data abstraction which is a concept of keeping implementation details separate from associated data.**
    - **True.**

- **Abstract Class is the Same as Abstraction in OOP**
    - **No, they are two different things, these abstract classes should not be confused with data abstraction which is a concept of keeping implementation details separate from associated data..**