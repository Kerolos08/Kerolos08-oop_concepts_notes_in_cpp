# Access Specifiers/Modifiers

### **Access Specifiers/Modifiers**

Are keywords that control the visibility and accessibility of classes, methods, and data members from other parts of the program.

### **Theose Keywords are:**

**1. Public**

Members declared as public can be accessed from anywhere in the program.

Example.

**2. Private**

Members declared as private can be accessed only inside the same class.

They are hidden from outside classes and objects.

**3. Protected**

Members declared as protected can be accessed:

inside the same class

inside derived (child) classes

But not accessible from outside objects.

```cpp
#include <iostream>
using namespace std;

class clsPerson
{
  private: 
  //accissable and usable inside this class
  int Variable1 = 10;
  int Function1 ()
  {
    return 30;
  };
  
  protected: 
  //only accessable in this class and the classes that inhirits this class
  int Variable2 = 20;
  int Function2 ()
  {
    return 40;
  };
  
  public: 
  //accessable for everyone outside/inside/and classes inherits this class
  string FirstName;
  string lastName;
  string FullName () {
    return FirstName + " " + lastName;
  };
  int Function3 ()
  {
    return Function2() + Function1() + Variable2 + Variable1;
  };
};

int main () 
{
  clsPerson Person1;
  Person1.FirstName = "Kero";
  Person1.lastName = "xxxx";

  cout << Person1.FullName() << endl;
  cout << Person1.Function3() << endl;

  return 0;
}
```

### **Why do we use them? (Encapsulation)**

Access specifiers help implement **encapsulation**:

Hide sensitive data (private).

Allow controlled access via methods (like getters/setters).

Share functionality with child classes (protected).

Expose safe parts of the class (public).

### **So,**

public → open to all

private → only inside the class

protected → inside the class + subclasses
