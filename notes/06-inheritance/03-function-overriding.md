# Function Overriding

## Intro

When you have a Base class with a function that works fine, but in the Derived class it’s not useful or needs to be changed to fit the new class —

It’s like inheriting many traits from your father, but one of them doesn’t suit you, so you rebuild it in your own way to fit who you are.

## Code

```cpp
class clsPerson
{
private:
    string _ID;
    string _FirstName;
    string _LastName;
    string _Email;
    string _PhoneNumber;

public:
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
    clsEmployee(string id, string firstname, string lastname, string email, string phonenumber, string department, string title, double salary)
        : clsPerson(id, firstname, lastname, email, phonenumber)
    {
        _Department = department;
        _Title = title;
        _Salary = salary;
    }
    void Set_Title(string title)
    {
        _Title = title;
    }
    string Get_Title()
    {
        return _Title;
    }
    void Set_Salary(int salary)
    {
        _Salary = salary;
    }
    int Get_Salary()
    {
        return _Salary;
    }
    void Set_Department(string department)
    {
        _Department = department;
    }
    string Get_Department()
    {
        return _Department;
    }
};
```

So in this code if the `Print` Method that was inherited from the Base class the output would be like this 

```cpp
Info:
--------------------------
ID        : 76452865257
First Name: Kerolos
Last Name : Hany
Full Name : Kerolos Hany
Email     : me@gmail.com
Phone     : +20 1172356252
--------------------------
```

That is not suitable to be used in the Employee class so this Print method should be modified to fit the new class.

### Solution

So we should **Redefining (Overriding)** the Print Function in the **Derived class** 

- The **derived class** defines a **new version** of the same function (same name, same parameters).
- The derived version **hides** the base one when called from a derived object.

```cpp
class clsPerson
{
private:
    string _ID;
    string _FirstName;
    string _LastName;
    string _Email;
    string _PhoneNumber;

public:
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
    clsEmployee(string id, string firstname, string lastname, string email, string phonenumber, string department, string title, double salary)
        : clsPerson(id, firstname, lastname, email, phonenumber)
    {
        _Department = department;
        _Title = title;
        _Salary = salary;
    }
    void Set_Title(string title)
    {
        _Title = title;
    }
    string Get_Title()
    {
        return _Title;
    }
    void Set_Salary(int salary)
    {
        _Salary = salary;
    }
    int Get_Salary()
    {
        return _Salary;
    }
    void Set_Department(string department)
    {
        _Department = department;
    }
    string Get_Department()
    {
        return _Department;
    }
    void Print ()
    {
        cout << "\nInfo:";
        cout << "\n--------------------------";
        cout << "\nID        : " << Get_ID();
        cout << "\nFirst Name: " << Get_FirstName();
        cout << "\nLast Name : " << Get_LastName();
        cout << "\nFull Name : " << FullName();
        cout << "\nEmail     : " << Get_Email();
        cout << "\nPhone     : " << Get_PhoneNumber();
        
        cout << "\nDepartment: " << _Department;
        cout << "\nTitle     : " << _Title;
        cout << "\nSalary    : " << _Salary;
        cout << "\n--------------------------\n";
    }
};

int main()
{
    clsEmployee Emp1("627567572", "Kerolos", "Hany", "me@gmail.com", "+20 1186376532", "Developer", "Senior", 343000);
    Emp1.Print();
    return 0;
}
```

By doing this the **Base class’s** `Print` method is replace with the **Sub class’s** `Print` method so when calling it from the **Sub class** it uses the new `Print` function.

### New Output after overriding

```cpp
Info:
--------------------------
ID        : 627567572
First Name: Kerolos
Last Name : Hany
Full Name : Kerolos Hany
Email     : me@gmail.com
Phone     : +20 1186376532
Department: Developer
Title     : Senior
Salary    : 343000
--------------------------
```

## Quiz

- **Function Overriding : The function in derived class overrides the function in base class.**
    - **True**.

- **If you override a function in base class will you be able to access this function from the object of derived class**
    - **False.**

- **If you override a function in base class will you be able to access this function inside derived class?**
    - **True.**

- **If you override a function in base how to access it from within the derived class?**
    - **`BaseClassName::FunctionName()`.**
