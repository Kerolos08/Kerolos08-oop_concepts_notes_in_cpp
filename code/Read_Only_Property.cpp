#include <iostream>
using namespace std;

class clsPerson
{
private:
  long _ID = 5287563753785;
  string _FirstName;
  string _LastName;

public:
  long GetID()
  {
    // Get Property, that mean it's a Read Only function that's because there is no set function for it.
    return _ID;
  }
  void SetFirstName(string FirstName)
  {
    // Set Property.
    _FirstName = FirstName;
  }
  string GetFirstName()
  {
    // Get Property.
    return _FirstName;
  }
  void SetLastName(string LastName)
  {
    // Set Property.
    _LastName = LastName;
  }
  string GetLastName()
  {
    // Get Property.
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

  cout << "ID: " << Person1.GetID() << endl;
  cout << "First Name: " << Person1.GetFirstName() << endl;
  cout << "Last Name: " << Person1.GetLastName() << endl;

  return 0;
}