# Third Principle/Concept of OOP: Inheritance

<aside>
🧠

> Reuse the code
> 
</aside>

## What is Inheritance in OOP

It is the **Third Principle** in OOP, It allows to create a **new class** that called **(Sub - Derived - Child)**

**Class** based on an **Exiting Class** that called **(Super - Base - Parent) Class**.

- The derived class **inherits** the attributes (data members) and behaviors (functions/methods) of the base class.
- It also allows you to **extend or override** the base class functionality.

## Why is Inheritance important

- To **reuse code** (don’t repeat yourself).
- To build a **hierarchy of classes**.
- To make code **easier to maintain and extend**.

## Types of Inheritance in C++

1. **Single Inheritance** → One base, one derived.
2. **Multiple Inheritance** → One derived class inherits from multiple bases.
3. **Multilevel Inheritance** → A class derives from another derived class.
4. **Hierarchical Inheritance** → Multiple classes inherit from one base.
5. **Hybrid Inheritance** → Combination of the above.

## Access Specifiers in Inheritance

When inheriting, the **access specifier** matters:

- `public` inheritance → public stays public, protected stays protected.
- `protected` inheritance → public & protected become protected.
- `private` inheritance → public & protected become private.

## After Inheritance

We can write the new code **(build on our base class)**  but some Methods that **inherited** form the **Base class** are need to be **Edited** or not be used as they are **not matching our new Sub Class** so we need to  **customize** this nonworking method to **fit** our **Sub Class**.

## Code

```cpp
#include <iostream>
using namespace std;

class clsPerson
{
private:
    string _ID;
    string _FirstName;
    string _LastName;
    string _Email;
    string _PhoneNumber;

public:
    clsPerson ()
    {

    }
    clsPerson(string id, string firstname, string lastname, string email, string phonenumber)
    {
        // parameterized constructor
        _ID = id;
        _FirstName = firstname;
        _LastName = lastname;
        _Email = email;
        _PhoneNumber = phonenumber;
    }
    string Get_ID()
    {
        // Read only property
        return _ID;
    }
    void Set_FirstName(string firstname)
    {
        // Property Set for First Name
        _FirstName = firstname;
    }
    string Get_FirstName()
    {
        // Property Get for First Name
        return _FirstName;
    }
    void Set_LastName(string lastname)
    {
        // Property Set for Last Name
        _LastName = lastname;
    }
    string Get_LastName()
    {
        // Property Get for Last Name
        return _LastName;
    }
    void Set_Email(string email)
    {
        // Property Set for Email
        _Email = email;
    }
    string Get_Email()
    {
        // Property Get for Email
        return _Email;
    }
    void Set_PhoneNumber(string phonenumber)
    {
        // Property Set for Phone
        _PhoneNumber = phonenumber;
    }
    string Get_PhoneNumber()
    {
        // Property Get for Phone
        return _PhoneNumber;
    }
    string FullName()
    {
        return _FirstName + " " + _LastName;
    }
    void Print()
    {
        cout << "\nInfo:";
        cout << "\n--------------------------";
        cout << "\nID        : " << _ID;
        cout << "\nFirst Name: " << _FirstName;
        cout << "\nLast Name : " << _LastName;
        cout << "\nFull Name : " << FullName();
        cout << "\nEmail     : " << _Email;
        cout << "\nPhone     : " << _PhoneNumber;
        cout << "\n--------------------------\n";
    }
    void SendEmail(string Sub, string Body)
    {
        cout << "\nThe following message sent successfully to Email: " << _Email;
        cout << "\nSubject: " << Sub;
        cout << "\nBody   : " << Body << endl;
    }
    void SendSMS(string SMS)
    {
        cout << "\nThe following SMS sent successfully to Phone: " << _PhoneNumber;
        cout << "\n"
             << SMS << endl;
    }
};

class clsEmployee : public clsPerson
{
    private:
    string _Department;
    string _Title;
    float _Salary;

    public:
    void Set_Title(string title)
    {
        _Title = title;
    }
    string Get_Title()
    {
        return _Title;
    }
    void Set_Salary (int salary)
    {
        _Salary = salary;
    }
    int Get_Salary ()
    {
        return _Salary;
    }
    void Set_Department (string department)
    {
        _Department = department;
    }
    string Get_Department ()
    {
        return _Department;
    }

};

int main()
{
    // clsPerson Person1("78357527", "Kero", "xxxx", "me@gmail.com", "+20 1034785041");
    // Person1.Print();

    // Person1.SendEmail("Hi", "How are you?");
    // Person1.SendSMS("How are you?");

    clsEmployee Employee1;
    Employee1.Set_FirstName("Kerolos");
    Employee1.Set_LastName("Hany");
    Employee1.Set_Email("me@gmail.com");
    Employee1.Print();
    Employee1.SendSMS("Hi");

    Employee1.Set_Salary(5900);

    Employee1.Print();
    return 0;
}
```

## Quiz

- **Inheritance: Inheritance is one in which a new class is created that inherits the properties of the already exist class. It supports the concept of code reusability and reduces the length of the code in object-oriented programming.**
    - **True**.

- **The class that inherits properties from another class is called Subclass or Derived Class**
    - **True.**

- **The class whose properties are inherited by a subclass is called Base Class or Super class.**
    - **True.**

- **Derived Class and Sub Class are the same.**
    - **True**.

- **Base Class and Super Class are the same**
    - **True**.

- **You can inherit only public and protected members, private members are not inherited.**
    - **False**.
