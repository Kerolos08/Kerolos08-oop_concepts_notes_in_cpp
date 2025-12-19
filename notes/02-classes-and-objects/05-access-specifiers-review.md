# Access Specifiers/Modifiers Review

## Code

```cpp
#include <iostream>

using namespace std;

class clsA
{
private:
    //only accessible   inside this class, neither derived classes nor outside class.
    int _Var1;
    void _Fun1()
    {
        cout << "Function 1";
    }

protected:
    //only accessible  inside this class and all derived classes, but not outside class
    int Var2;
    void Fun2()
    {
        cout << "Function 1";
    }

public:
    // Accessable inside this class, all derived classes, and outside class
    int Var3;
    void Fun3()
    {
        cout << "Function 1";
    }

};

class clsB : public clsA
{
    
public:

    void Func1()
    {
        cout << clsA::Var2;
    }
};

int main()

{

   clsB b;
   
    system("pause>0");
    return 0;
}
```

## Quiz

- **Access modifiers (or access specifiers) are keywords in object-oriented languages that set the accessibility of classes, methods, and other members..**
    - **True**.

- **Which of the following is Access Specifiers/Modifiers:**
    - **Public.**
    - **Protected.**
    - **Private.**

- **Public Members can be accessed from inside and outside the class.**
    - **True.**
    
- **Private Members can be accessed from outside the class through object.**
    - **False.**

- **Private Members can be accessed by any class inherits the current class.**
    - **False.**

- **Private Members can be accessed only from inside the class, it cannot be accessed from outside the class nor from the classes inherits the current class..**
    - **True.**

- **If you want to have a member that is private to outside class and public to classes inherits the current class, which access specifier/modifier you use?**
    - **Protected.**

- **Protected Members can be accessed from outside class through objects.**
    - **False.**

- **Protected Members can be accessed from inside class and from all classes inherits the current class.**
    - **True.**

- **OOP is more secured because you can hide members from developers.**
    - **True.**

- **Inside the class I can access everything including Public, Private , and Protected Members.**
    - **True.**