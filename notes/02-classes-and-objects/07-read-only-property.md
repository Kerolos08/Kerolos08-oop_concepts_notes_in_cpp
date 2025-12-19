# Read Only property

### **What if**

A software having a sensitive data that required to be safe from anyone and not be changed and when it need to be accessed from the data base for example to be in the program without being changed or manipulated, that called **Read Only**.

### **How to make a Read Only property**

This can be achieved with a property (Set/Get).

but with a small change,

Using the **Get Function** only without the Set Function.

### **What about Write Only**

With the same logic we can make a write only function although it is so rare to be used.

This can be achieved with the Set Function.

```cpp
#include <iostream>
using namespace std;

class clsPerson
{
  private:
  long _ID = 5287563753785;
  string _FirstName;
  string _LastName;

  public:
  long GetID () {
    // Get Property, that mean it's a Read Only function that's because there is no set function for it.
    return _ID;
  }
  void SetFirstName (string FirstName) {
    // Set Property.
    _FirstName = FirstName;
  }
  string GetFirstName () {
    // Get Property.
    return _FirstName;
  }
  void SetLastName (string LastName) {
    // Set Property.
    _LastName = LastName;
  }
  string GetLastName () {
    // Get Property.
    return _LastName;
  }
  string FullName () {
    return _FirstName + " "+ _LastName;
  }
};

int main () {
  clsPerson Person1;
  Person1.SetFirstName("Kero");
  Person1.SetLastName("xxxx");

  cout << "ID: " << Person1.GetID() << endl;
  cout << "First Name: " << Person1.GetFirstName() << endl;
  cout << "Last Name: " << Person1.GetLastName() << endl;

  return 0;
}
```
