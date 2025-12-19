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

int main()
{
    clsEmployee Emp1("43532", "Kero", "xxx", "me2@gmail.com", "+4857352", "Developer", "Senior", 343000);
    Emp1.Print();
    cout << "\n" << Emp1.Get_Department();
    cout << "\n" << Emp1.Get_Title();
    cout << "\n" << Emp1.Get_Salary();
    return 0;
}