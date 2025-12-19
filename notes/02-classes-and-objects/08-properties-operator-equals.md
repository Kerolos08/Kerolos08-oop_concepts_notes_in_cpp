# Properties Set and Get through "=”

```cpp
#include <iostream>
using namespace std;

class clsPerson
{
  private:
  long _ID = 89235278523;
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
  __declspec(Property(get = GetFirstName, put = SetFirstName)) string FirstName;
};

int main () {
  clsPerson Person1;
  // using regular set,get property.
  Person1.SetFirstName("Kero");
  cout << "First Name: " << Person1.GetFirstName() << endl;

  // insted of we wrote above we can write this.
  Person1.FirstName = "Kero";
  cout << "First Name: " << Person1.FirstName << endl;
  return 0;
}
```

### **Property Set/Get using "="**

`__declspec(Property(get = GetFirstName, put = SetFirstName)) string FirstName;`

- This line of code is a syntax that allows us to call map the **Set/Get** properties **depending on how it will be used in the object.**
- As it is similar to something in **C#** and this line of code is an extension that only working on the VS Studio to simulate this call in C#.

### **How it Works:**

- It allows us to create a **new property** **connected to both Get/Set properties** by assign the **Set** property to the **Put** and call the **`Set` method** when we assigning a value to this member.
- Assign the **Get** property to the **Get** and call the `Get` method when we need to read or reach the variable.

### **So,**

We can still use the regular Set/Get as this syntax only works on the VS Studio compiler and when we use it in `MinGW` it leads to an error.
