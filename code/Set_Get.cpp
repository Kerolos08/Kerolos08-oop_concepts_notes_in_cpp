#include <iostream>
using namespace std;

class clsPerson
{
private:
  string _FirstName;
  string _LastName;

public:
  void SetFirstName(string FirstName)
  {
    // set properity (that garantie that noone can assign invalid data to this variable)
    _FirstName = FirstName;
  }

  string GetFirstName()
  {
    // get Properity (That controlling how to read this variable)
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

  string FullName()
  {
    return _FirstName + " " + _LastName;
  }
};

int main()
{
  clsPerson Person1;

  Person1.SetFirstName("Kero");
  Person1.SetLastName("xxxx");

  cout << "First Name: " << Person1.GetFirstName() << endl;
  cout << "Last Name: " << Person1.GetLastName() << endl;
  cout << "Full Name: " << Person1.FullName();
  return 0;
}