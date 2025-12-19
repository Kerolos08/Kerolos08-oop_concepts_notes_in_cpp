# Properties Set and Get

### **Properties in OOP:**

properties act like a bridge between class fields (variables inside the class) and the outside world.

They let you control access to those fields using getters (to read) and setters (to write).

- `get` → Reading the value of a Private class member.
- `set` → Assigning or edit the value of a Private class member.

### **We should stop assigning values outside the class:**

This means the variable members in the class is `public` which allows anyone to:

- Put invalid values (e.g., negative age).
- Change them anytime without rules.

Properties solve this by giving controlled access.

### **Example (get/set methods):**

```cpp
#include <iostream>
using namespace std;

class clsPerson
{
  private:
  string _FirstName;
  string _LastName;
  public:

  void SetFirstName (string FirstName) {
    // set properity (that garantie that noone can assign invalid data to this variable)
    _FirstName = FirstName;
  }

  string GetFirstName () {
    // get Properity (That controlling how to read this variable)
    return _FirstName;
  }

  void SetLastName (string LastName) {
    _LastName = LastName;
  }

  string GetLastName () {
    return _LastName;
  }

  string FullName () {
    return _FirstName + " " + _LastName;
  }

};

int main() {
  clsPerson Person1;

  Person1.SetFirstName("Kero");
  Person1.SetLastName("xxxx");

  cout << "First Name: " << Person1.GetFirstName() << endl;
  cout << "Last Name: " << Person1.GetLastName() << endl;
  cout << "Full Name: " << Person1.FullName();
  return 0;
}
```

### **So,**

- `get` → safely **read** the value.
- `set` → safely **write/change** the value.
- Properties = **encapsulation** (hiding details + controlling access)

### **Properties achieves the Encapsulation term:**

**Definition:**

- Encapsulation is one of the four main principles of Object-Oriented Programming (OOP).
It means:

> Wrapping (hiding) the internal details (data/variables) of a class and only allowing access through controlled methods (getters/setters).
> 
- So the object’s data is protected from direct access, and you decide how it can be read or modified.

**Key Idea:**

- Keep data members (variables) private.
- Provide public methods (get/set) to access and modify them safely.

**Why Encapsulation?**

1. Data Protection → Prevents invalid or harmful changes.
2. Control → You can validate or limit values.
3. Flexibility → Internal implementation can change without affecting other code.
4. Security → You decide what information to expose.

**So,**
Encapsulation = hiding data + controlling access through methods instead of exposing variables directly.
