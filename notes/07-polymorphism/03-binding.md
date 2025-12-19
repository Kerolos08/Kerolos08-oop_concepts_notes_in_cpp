# Static/Early Binding vs Dynamic/Late Binding

### Binding

**Connecting a function call to the actual function code that will run.**

### Static Binding (Early Binding)

- Static binding means the function to be called is **decided at compile time**, based on the **type of the pointer or reference**, not the actual object it points to.
- **Characteristics:**
    - Happens **before** the program runs (at compile time).
    - Used for **normal (non-virtual)** functions.
    - **Faster**, but less flexible.
    - The compiler knows exactly which function to call.

### Dynamic Binding (Late Binding)

- Dynamic binding means the function to be called is **decided at runtime**, based on the **actual type of the object**, not the pointer type.
- **Characteristics:**
    - Happens **while** the program runs.
    - Used for **virtual functions**.
    - **Slightly slower**, but much more flexible.
    - Enables **runtime polymorphism**.

| Feature | Static Binding | Dynamic Binding |
| --- | --- | --- |
| Decision Time | Compile Time | Runtime |
| Keyword Needed | None | `virtual` |
| Based On | Type of Pointer | Type of Object |
| Speed | Faster | Slightly Slower |
| Supports Polymorphism | ❌ No | ✅ Yes |
| Example | Normal function | Virtual function |

## Example With Code

```cpp
#include <iostream>
using namespace std;

class clsPerson 
{
    public:
    virtual void Print ()
    {
        cout << "Hi, I'm a Person :)" << endl;
    }
};

class clsEmployee : public clsPerson
{
    public:
    void Print ()
    {
        cout << "Hi, I'm an Employee :)" << endl;
    }
};

class clsStudent : public clsPerson
{
    public:
    void Print ()
    {
        cout << "Hi, I'm a Student :)" << endl;
    }
};

int main ()
{
    clsEmployee Employee1;
    clsStudent Student1;

    // Employee1.Print();
    // Student1.Print();

    clsPerson * Person1 = &Employee1;
    clsPerson * Person2 = &Student1;

    Person1->Print();
    Person2->Print();

    return 0;
}
```

## Quiz

- **Static Binding: The binding which can be resolved at compile time by the compiler is known as static or early binding. The binding of all the static, private methods is done at compile-time.**
    - **True.**

- **Dynamic Binding: In Dynamic binding compiler doesn’t decide the method to be called. Overriding is a perfect example of dynamic binding. In overriding both parent and child classes have the same method.**
    - **True.**

- **Early Binding and Static Binding are the same.**
    - **True.**

- **Late Binding and Dynamic Binding are the same.**
    - **True.**

- **Early Binding / Static Binding are done at the compilation time.**
    - **True.**

- **Late Binding/Dynamic Binding are done at run time.**
    - **True.**