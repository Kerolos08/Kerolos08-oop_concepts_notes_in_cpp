#include <iostream>
using namespace std;

class clsEmployee
{
private:
    string _ID;
    string _FirstName;
    string _LastName;
    string _Title;
    string _Email;
    string _Phone;
    int _Salary;
    string _Department;

public:
    clsEmployee(string ID, string FirstName, string LastName, string Title, string Email, string Phone, int salary, string Department)
    {
        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _Title = Title;
        _Email = Email;
        _Phone = Phone;
        _Salary = salary;
        _Department = Department;
    }

    string Get_ID()
    {
        // Read only Property
        return _ID;
    }

    // Set/Get for all Private attribute member (to achive encapsulation)
    void Set_FirstName(string firstname)
    {
        _FirstName = firstname;
    }
    string Get_FirstName()
    {
        return _FirstName;
    }
    void Set_LastName(string lastname)
    {
        _LastName = lastname;
    }
    string Get_lastName()
    {
        return _LastName;
    }
    void Set_Title(string title)
    {
        _Title = title;
    }
    string Get_Title()
    {
        return _Title;
    }
    void Set_Email(string email)
    {
        _Email = email;
    }
    string Get_Email()
    {
        return _Email;
    }
    void Set_Phone (string phone)
    {
        _Phone = phone;
    }
    string Get_Phone ()
    {
        return _Phone;
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

    // FullName Method
    string FullName ()
    {
        return _FirstName + " " + _LastName;
    } 
    
    // Print Method
    void Print()
    {
        cout << "\nEmployee Info";
        cout << "\n------------------------------";
        cout << "\nID        : " << _ID;
        cout << "\nFirst Name: " << _FirstName;
        cout << "\nLast Name : " << _LastName;
        cout << "\nFull Name : " << FullName();
        cout << "\nTitle     : " << _Title;
        cout << "\nEmail     : " << _Email;
        cout << "\nPhone     : " << _Phone;
        cout << "\nSalary    : " << _Salary;
        cout << "\nDepartment: " << _Department;
        cout << "\n------------------------------\n";
    }

    // Send Email Method
    void SendEmail (string Sub, string Body)
    {
        cout << "\nThe following message sent successfully to Email: " << _Email;
        cout << "\nSubject: " << Sub;
        cout << "\nBody: " << Body << endl;
    }

    // Send SMS Method
    void SendSMS (string SMS)
    {
        cout << "\nThe following message sent successfully to phone number: " << _Phone;
        cout << "\n" << SMS << endl;
    }
};

int main ()
{
    clsEmployee Employee1 ("93748735625", "Kero", "xxx", "Senior", "kero00003@gmail.com", "+78235243872", 80000, "Software Engineer");

    Employee1.Print();

    Employee1.SendEmail("Hi", "How are you?");
    Employee1.SendSMS("Hi, How are you?");

    return 0;
}