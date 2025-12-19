# Destructors

## What is Destructor?

- **special member function** of a class that is automatically called when an object goes out of scope or is explicitly deleted.
- It is mainly used to **release resources** that the object may have acquired during its lifetime (like memory, file handles, or network connections).

<aside>
🧠

> When **Allocating** a **Variable**, **Array** or **Object** in the **Heap** with `new`. It should be **Released** after being used with `delete`. That’s for not causing **Memory Leaks**.
> 
</aside>

## **Syntax**

```cpp
~ClassName ()
{
// this is a destructor
}
```

- A destructor has the same name as the class but is **preceded with a tilde (~)**.
- It **does not take arguments** and **does not return any value**.

## Main Properties

### **Automatic Call**

- The destructor is **automatically called** when:
    - A local object goes out of scope.
    - An object allocated dynamically with `new` is released using `delete`.
- You **cannot call** a destructor explicitly like a normal function (though you technically can, but it’s rarely correct).

### **One per class**

- A class can only have **one destructor**.
- Unlike constructors, destructors **cannot be overloaded**.

### **Default Destructor**:

- If you don’t define a destructor, the compiler provides a **default destructor** that destroys the object without custom cleanup.
- But if your class manages dynamic resources, you usually need to define one.

## Code

```cpp
#include <iostream>
using namespace std;

class clsPerson
{
    public:
    string FullName;
    
    clsPerson ()
    {
        // this is a constructor
        FullName  = "Kero xxxx";
        cout << "\nHello, I'm a construcor";
    }

    ~clsPerson ()
    {
        // this is a destructor
        cout << "\nHello, I'm a destructor";
    }
};

void Func1 ()
{
    clsPerson Person1;
}

void Func2()
{
    clsPerson * Person2 = new clsPerson;
    delete Person2; // releasing the allocated object that is created in the heap
}

int main ()
{
    Func1();
    Func2();
    return 0;
}
```

## Quiz

- **Destructor is an instance member function which is invoked automatically whenever an object is going to be destroyed. Meaning, a destructor is the last function that is going to be called before an object is destroyed.**
    - **True**

- **Destructor has the same name as their class name preceded by a tilde (~) symbol.**
    - **True**

- **It is not possible to define more than one destructor.**
    - **True**

- **It is not possible to define more than one destructor.**
    - **True**

- **The destructor is only one way to destroy the object create by constructor. Hence destructor can-not be overloaded.**
    - **True**

- **Destructor neither requires any argument nor returns any value.**
    - **True**

- **It is automatically called when object goes out of scope.**
    - **True**
