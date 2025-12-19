#include <iostream>
using namespace std;

class clsPerson
{
public:
  string FirstName;
  string lastName;
  string FullName()
  {
    return FirstName + " " + lastName;
  };
};

int main()
{
  clsPerson Person1,
      Person2;
  Person1.FirstName = "FirstName1";
  Person1.lastName = "LastName1";

  Person2.FirstName = "FirstName2";
  Person2.lastName = "LastName2";

  cout << Person1.FullName() << endl;
  cout << Person2.FullName() << endl;

  return 0;
}