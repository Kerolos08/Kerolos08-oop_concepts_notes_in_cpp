# Friend Function

## Friend Function

Is a **non-member function** that has permission to access the **private** and **protected** members of a class. It’s declared inside the class using the keyword **`friend`**, but it’s **not** part of the class itself.

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

    clsA()
    {
        _Var1 = 10;
        _Var3 = 20;
        Var2 = 30;
    }

    // Declare a friend function
    friend void Display(clsA A1);
};

// Friend function definition
void Display(clsA A1)
{
    cout << "\nThe value of Var1 = " << A1._Var1;
    cout << "\nThe value of Var2 = " << A1.Var2;
    cout << "\nThe value of Var3 = " << A1._Var3;
}

int main()
{
    clsA A1;
    Display(A1);
    return 0;
}

```

- The function `Display()` is **not a member** of `clsA`.
- But since it’s declared as a **friend**, it can access `clsA`’s **private** (`_Var1`) and **protected** (`_Var3`) members directly.
- Without `friend`, this would cause a **compiler error**, because private and protected members are normally inaccessible from outside.

## Quiz

- **A friend function in C++ is defined as a function that can access private, protected and public members of a class.**
    - **True.**

- **The friend function is declared using the friend keyword inside the body of the class.**
    - **True.**

- **By using the keyword, the ‘friend’ compiler understands that the given function is a friend function.**
    - **True.**

- **We declare friend function inside the body of a class, whose private and protective data needs to be accessed, starting with the keyword friend to access the data. We use them when we need to operate between two different classes at the same time.**
    - **True.**

- **Friend functions of the class are granted permission to access private and protected members of the class in C++. They are defined globally outside the class scope. Friend functions are not member functions of the class.**
    - **True.**

- **A friend function in C++ is a function that is declared outside a class but is capable of accessing the private and protected members of the class. There could be situations in programming wherein we want two classes to share their members. These members may be data members, class functions or function templates. In such cases, we make the desired function, a friend to both these classes which will allow accessing private and protected data of members of the class.**
    - **True.**

- **Generally, non-member functions cannot access the private members of a particular class. Once declared as a friend function, the function is able to access the private and the protected members of these classes.**
    - **True.**