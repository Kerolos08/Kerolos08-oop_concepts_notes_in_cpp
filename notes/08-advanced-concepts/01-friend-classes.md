# Friend Classes

## Friend Class

- Concept of allowing one class to access the **private** and **protected** members of another class.
- Normally, private and protected data are hidden from other classes (that’s *encapsulation*). But when you declare a class as a *friend*, you’re giving it permission to “look inside” and access those hidden members directly.

## Example with Code

```cpp
#include <iostream>
using namespace std;

class clsA
{
    private:
    int _Var1;
    protected:
    int _Var3;
    public:
    int Var2;
    clsA ()
    {
        _Var1 = 10;
        _Var3 = 20;
        Var2 = 30;
    }

    friend class clsB;
};

class clsB
{
    public:
    void Display(clsA A1)
    {
        cout << endl << "The value of Var1 = " << A1._Var1;
        cout << endl << "The value of Var2 = " << A1.Var2;
        cout << endl << "The value of Var3 = " << A1._Var3;
    }

};

int main ()
{
    clsA A1;
    clsB B1;
    B1.Display(A1);

    return 0;
}
```

## When to Use

- When two classes are **tightly related** and need to share data directly.
- When you need to access private or protected members **without using setters/getters**.
- It’s an **exception** to the encapsulation rule — it keeps encapsulation for the rest of the code but gives one specific class **exclusive access**.

## When Not

- Avoid frequent use to maintain **data privacy** and **encapsulation**.
- Use only when **absolutely necessary** to simplify interaction between classes.

## Quiz

- **We can use a friend Class in C++ using the "friend" keyword.**
    - **True.**

- **A friend class can access both private and protected members of the class in which it has been declared as friend.**
    - **True.**

- **Since ClassB is a friend class, we can access all members of ClassA from inside ClassB. However, we cannot access members of ClassB from inside ClassA. It is because friend relation in C++ is only granted, not taken.**
    - **True.**

- **If ClassB is declared as a friend Class inside ClassA , ClassB can access all private and protected members of ClassA, and also ClassA can Access all members of ClassB.**
    - **False, only ClassB can access all members of ClassB but ClassA cannot..**