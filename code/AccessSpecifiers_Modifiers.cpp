#include <iostream>
using namespace std;

class clsPerson
{
private:
  // accissable and usable inside this class
  int Variable1 = 10;
  int Function1()
  {
    return 30;
  };

protected:
  // only accessable in this class and the classes that inhirits this class
  int Variable2 = 20;
  int Function2()
  {
    return 40;
  };

public:
  // accessable for everyone outside/inside/and classes inherits this class
  string FirstName;
  string lastName;
  string FullName()
  {
    return FirstName + " " + lastName;
  };
  int Function3()
  {
    return Function2() + Function1() + Variable2 + Variable1;
  };
};

int main()
{
  clsPerson Person1;
  Person1.FirstName = "Kero";
  Person1.lastName = "xxxx";

  cout << Person1.FullName() << endl;
  cout << Person1.Function3() << endl;

  return 0;
}