# What is ‘this’ pointer ?

## `This` Pointer

- Its a **special pointer** available inside **non-static member functions** of a class.
- `this` is a pointer that refers to the **current object**.
- It automatically points to **the object that called the function**.

## When to Use

- **To avoid naming conflicts** between data members and parameters.
- **To pass the current object as an argument** to another function.

## Why `this` is not working with `static` functions

- **Non-static functions** work on a specific object, so they have a `this` pointer.
- **Static functions** belong to the class itself, not to any object, so they don’t have a `this` pointer.

## Example

```cpp
#include <iostream>
using namespace std;

class clsPerson 
{
    public:
    int ID;
    string FirstName;
    double Salary;
    
    clsPerson (int ID, string FirstName, double Salary)
    {
     //avoiding naming conflicting
        this->ID = ID;
        this->FirstName = FirstName;
        this->Salary = Salary;
    }

    void Print ()
    {
        cout << ID << " " << FirstName << " " << Salary << endl;
    }

    static void Func1 (clsPerson P1)
    {
        P1.Print();
    }

    void Func2 ()
    {
    //Passing the current object as an argument to another function
        Func1(*this);
		{
    clsPerson P1 (43, "Kerolos", 4000);
    P1.Print();
    P1.Func2();

    return 0;
}
```

## Quiz

- **Every object in C++ has access to its own address through an important pointer called this pointer.**
    - **True.**

- **The this pointer is an implicit parameter to all member functions.**
    - **True.**

- **Therefore, inside a member function, this may be used to refer to the invoking object.**
    - **True.**

- **Friend functions do not have a this pointer, because friends are not members of a class. Only member functions/member data have a this pointer.**
    - **True.**

- **'this' pointer can be used to pass current object as a parameter to another method.**
    - **True.**

- **'this' pointer can be used to refer current class instance variable.**
    - **True.**