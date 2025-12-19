# Inheritance Visibility Modes

## **inheritance visibility modes**

That’s determine how the members (data and functions) of a **base class** are inherited by a **derived class**.

## Syntax

```cpp
Class DerivedClassName : <visibility mode> BaseClassName
{
//Members (Atributes and Methods)
};
```

| Base Member Type | Public Inheritance | Protected Inheritance | Private Inheritance |
| --- | --- | --- | --- |
| Public | Public | Protected | Private |
| Protected | Protected | Protected | Private |
| Private | Not Inherited | Not Inherited | Not Inherited |

## Public Inheritance

> What’s public stays public, what’s protected stays protected, what’s private stays hidden
> 

- The base class’s **public members** remain **public** in the derived class.
    
    → They can be accessed by the derived class itself, by any future derived classes, and by **objects** of those classes.
    
- The base class’s **protected members** remain **protected** in the derived class.
    
    → They can be accessed by the derived class and by any classes that **inherit from it** (as long as they don’t use private inheritance).
    
    → But **they cannot be accessed by objects** directly.
    
- The base class’s **private members** are **not inherited** (not accessible at all).
    
    → Neither the derived class nor any object can access them directly.
    

| Base Member | In Derived | Accessible in Derived? | Accessible in Objects? | Inheritable to Future Derived Classes? |
| --- | --- | --- | --- | --- |
| `public` | `public` | ✅ Yes | ✅ Yes | ✅ Yes |
| `protected` | `protected` | ✅ Yes | ❌ No | ✅ Yes |
| `private` | (not inherited) | ❌ No | ❌ No | ❌ No |

## Protected inheritance

> What’s public becomes protected, what’s protected stays protected, what’s private stays hidden.
> 

- The base class’s **public members** become **protected** in the derived class.
    
    → They can be accessed **inside the derived class** and by **any future derived classes**.
    
    → They **cannot** be accessed directly by objects.
    
- The base class’s **protected members** remain **protected**.
    
    → They can be accessed by the **derived class** and by **future derived classes**,
    
    → but **not** by any objects.
    
- The base class’s **private members** remain **inaccessible** —
    
    → they are **not inherited**, so they cannot be accessed by derived classes or objects.
    
    | Base Member | In Derived | Accessible Inside Derived? | Accessible by Object? | Inheritable by Future Derived Classes? |
    | --- | --- | --- | --- | --- |
    | `public` | `protected` | ✅ Yes | ❌ No | ✅ Yes |
    | `protected` | `protected` | ✅ Yes | ❌ No | ✅ Yes |
    | `private` | (hidden) | ❌ No | ❌ No | ❌ No |

## Private Inheritance

> What’s public becomes private, what’s protected becomes private, what’s private stays hidden.
> 

- The base class’s **public members** become **private** in the derived class.
    
    → They can be accessed **only inside the derived class** itself.
    
    → They **cannot** be accessed by:
    
    - Any class that inherits from this derived class in the future.
    - Any object created from these classes.
- The base class’s **protected members** also become **private** in the derived class.
    
    → They can be accessed **only inside the derived class**, but not by any future derived class or object.
    
- The base class’s **private members** remain **private to the base class**.
    
    → They are **not inherited at all**, so the derived class has **no access** to them.
    

| Base Member | In Derived | Accessible Inside Derived? | Accessible by Object? | Inheritable by Future Derived Classes? |
| --- | --- | --- | --- | --- |
| `public` | `private` | ✅ Yes | ❌ No | ❌ No |
| `protected` | `private` | ✅ Yes | ❌ No | ❌ No |
| `private` |  (hidden) | ❌ No | ❌ No | ❌ No |

## Example with code

```cpp
#include <iostream>
using namespace std;

class clsA
{

private:
    int V1;
    int Fun1()
    {
        return 1;
    }

protected:
    int V2;
    int Fun2()
    {
        return 2;
    }

public:
    int V3;
    int Fun3()
    {
        return 3;
    }
};

// try to change visibility mode public/private/protected
// and see in the main what will happen iside objects.
class clsB : protected clsA
{

public:
    int Fun4()
    {

        return 4;
    }

    void TestFun()
    {
        cout << V3 << endl;
        cout << V2 << endl;
        cout << Fun2() << endl;
    }
};

class clsC : public clsB
{

public:
    int Fun5()
    {
        clsA::Fun2();
        clsA::Fun2();
        clsB::Fun4();
        clsB::TestFun();

        return 5;
    }
};

int main()
{

    clsC b;
}
```

## Quiz

- **Visibility Mode "Private" will make everything private in the derived class, so it can make use of it and no one will make use of it neither derived classes nor objects.**
    - **True.**

- **Visibility Mode "Protected" will make everything protected in the derived class, so it can make use of it and all other derived classes will make use of it, but no objects will make use of it.**
    - **True.**

- **Visibility Mode "Public" will inherit the class publicly so every public members and protected members are useful for others.**
    - **True.**

- **Private Members in the Base Class are not accessible from outside the class nor the derived classes.**
    - **True.**