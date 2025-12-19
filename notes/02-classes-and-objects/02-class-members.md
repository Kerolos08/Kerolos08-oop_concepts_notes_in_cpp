# Class Members

Any data in a class called **Members.**

```cpp
class clsPerson // ? defining a class and its a data type
{
    // ? this private and will not be accessed from outside the class
    // ? for internal use only
    int x;
public:
    string FirstName; // ? this memeber called attribute
    string LastName;  // ? this also an attribute
    string FullName() // ? but this is method
    {
        return FirstName + " " + LastName;
    }
};
```

Those Members can be one of two types **Data Members** and **Method Members.**

### **Class Members**

**Data Members.**

Any **Variable** Declared inside the Class that Holds Data.

**In our case,**

`FirstName`, `LastName`  are **Data Members.**

**Method (Function) Members.**

Any Function or Procedure Declared inside the Class.

**In our case,**

`FullName()` is **Method Member.**