#include <iostream>
using namespace std;

class clsPerson
{
private:
    long long _ID = 150993487520;
    string _FirstName;
    string _LastName;

public:
    void SetFirstName(string FirstName)
    {
        _FirstName = FirstName;
    }

    string GetFirstName()
    {
        return _FirstName;
    }

    void SetLastName(string LastName)
    {
        _LastName = LastName;
    }

    string GetLastName()
    {
        return _LastName;
    }

    long long GetID()
    {
        return _ID;
    }

    string GetFullName()
    {
        return _FirstName + " " + _LastName;
    }
};

int main()
{
    clsPerson Person1;
    Person1.SetFirstName("Kerolos");
    Person1.SetLastName("xxx");

    cout << "ID: " << Person1.GetID() << endl;
    cout << "First Name: " << Person1.GetFirstName() << endl;
    cout << "Last Name: " << Person1.GetLastName() << endl;
    cout << "Full Name: " << Person1.GetFullName() << endl;

    return 0;
}