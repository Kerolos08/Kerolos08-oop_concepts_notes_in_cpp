#pragma once
#include <iostream>
#include "clsPerson.h"
using namespace std;

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