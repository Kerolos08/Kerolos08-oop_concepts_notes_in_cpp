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
    // clsPerson Person1("3010 815140 2631", "Kerolos", "Hany", "kerolosxj0@gmail.com", "+20 1555404182");
    // Person1.Print();

    // Person1.SendEmail("Hi", "How are you?");
    // Person1.SendSMS("How are you?");

    clsEmployee Employee1;
    Employee1.Set_FirstName("Kerolos");
    Employee1.Set_LastName("xxx");
    Employee1.Set_Email("me@gmail.com");
    Employee1.Print();
    Employee1.SendSMS("Hi");

    Employee1.Set_Salary(5900);

    Employee1.Print();
    return 0;
}