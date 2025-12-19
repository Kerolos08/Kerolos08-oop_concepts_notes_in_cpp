# Up Casting vs Down Casting

## What is Casting

**casting** simply means **converting one type into another**.

## Casting types in OOP

### Up Casting

- **converting a derived class pointer (or reference)** to a **base class pointer (or reference)**.
- **It’s called “up-casting” because you’re moving up the inheritance hierarchy.**
- **Props.**
    - Up-casting is **safe** (no explicit cast needed).
    - You can only access **base class members**, even though the object is of the derived type.
    - Commonly used in **polymorphism.**

### Down Casting

- **converting a base class pointer (or reference)** back to a **derived class pointer (or reference)**.
- **You’re moving *down* the inheritance hierarchy.**
- Down-casting is **unsafe.**

## Code

```cpp
#include <iostream>

using namespace std;

class clsPerson
{

public:

    string FullName="Mohammed Abu-Hadhoud";
 
};

class clsEmployee : public clsPerson
{

public:
    string Title = "CEO";

};

int main()

{

    clsEmployee Employee1;
  
    cout << Employee1.FullName << endl;

    //upcasting
    //this will convert employee to person.
    clsPerson * Person1 = &Employee1;
    //         Smaller <= Bigger
    
    cout << Person1->FullName << endl;
    //this only accessing the base class members.
   

    // clsPerson Person2;
    // cout << Person2.FullName << endl;

    // //downcasting : you cannot convert person to employee
    // clsEmployee* Employee2 = &Person2;
    //              Bigger   <= Smaller (Not Working)

    return 0;
}
```

**Person** Object can **pointing** to an **Employee** Object

Because the **Employee** class is **considered as a Person** class and **has all it’s members.**

**Base** class can points to a **Derived** class.

The **Father** can **points** to his **child**.

Employee Object can’t pointing to a Person Object **safely**.

Because the Person class is **not having** all the members that is added to it **(that is exists in the derived class).**

**Derived** class **can’t** points to a **Base** class **safely**.

The **Child** **can’t** **points** to his **Father**.

## Quiz

- **Up Casting is converting derived object to it's base object.**
    - **True.**

- **Down Casting is Converting Base object to Derived object**
    - **True.**

- **A pointer of type parent can point to an object of child class.**
    - **True, because all the members in which the pointer can access are exist in memory when the object of child class.**
    
- **A pointer of child class cannot point to an object of parent class.**
    - **True, because the child class members the pointer can access do not exist in memory when the object is of parent class.**