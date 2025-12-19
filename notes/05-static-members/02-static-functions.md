# Static Functions

## Static member function

A function that belongs to the **class itself**, not to any specific object of that class.

That means:

- It can be called **without creating an object** of the class.
- It can only access **static members** (variables or functions) of the class.

## Key Notes

- Can be called without creating an object:
    
    ```cpp
    Student::showCount();
    ```
    
- It also can be accessed via the object with:
    
    ```cpp
    obj1.ShowCount();
    ```
    
- **No separate definition outside needed** like with data members — it’s just a function, so you implement it normally.
- Can only directly access:
    - Other `static` data members
    - Other `static` member functions
        
        (it cannot access normal members, because those require an object).
        

## Static Attributes and Functions can be called by their class

Both **static functions** and **static attributes (variables)** belong to the **class itself** — not to objects.

That’s why you can access them directly like this:

```cpp
ClassName::StaticVariable;
ClassName::StaticFunction();
```

## Code

```cpp
#include <iostream>
using namespace std;

class clsA
{
    public:
    static int Func1 ()
    {
        return 100;
    }
    int Func2 ()
    {
        return 1;
    }
};

int main ()
{
    // Func1 is a static method that can be called directly with the class
    cout << clsA::Func1() << endl;     // 100

    clsA A1, A2;
    // it also can be called by the object
    cout << A1.Func1() << endl; // 100
    cout << A1.Func2()<< endl; // 1
    cout << A2.Func1() << endl; // 100
    return 0;
}
```

## Quiz

- **Static Functions can be called at class level without a need to have an object.**
    - **True**.

- **Static Functions can not be called through object.**
    - **False.**

- **Static Functions can be called through any object as well as through the class itself.**
    - **True.**

- **Static Functions can be called through any object as well as through the class itself.**
    - **No, Static methods can only access static members , because static methods can be called at class level without objects, and non static members you cannot access them without having object first.**