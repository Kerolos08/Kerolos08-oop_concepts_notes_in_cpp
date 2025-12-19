# Classes & Objects

### **Class**

**Class** expression came form the English expression “Classification”.

A **class** is a **custom data type** that you define.

**A classis** like a **blueprint** or **template** for creating objects.

It defines the structure and behavior (data and functions) that the objects created from it will have.

### **Class members**

The variables and  the functions in a class called:

**Variable** called Attributes (also called data members or fields).

**Functions** called Method (also called member function).

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

### **Private and Public in a Class**

They are **access specifiers**.

They control **who can access** the members (variables and functions) of a class.

Any thing that **not written in the class under public** or **written under private** **Means its private** 

That means that this part would be only **Accessible** in the class only and **NOT Accessible** out of the class.

**So**,

```cpp
int x;
```

Is **only Accessible** in the class however there is **no private statement**.

**But,**

```cpp
public:
    string FirstName; // ? this memeber called attribute
    string LastName;  // ? this also an attribute
    string FullName() // ? but this is method
    {
        return FirstName + " " + LastName;
    }
```

This part is **Accessible** in all the program.

### **Object**

**An object** is a specific **instance** of a class.

It has **real values** for the attributes defined in the class.

```cpp
    clsPerson Person1; // ! object from Person class
    Person1.FirstName = "Kero";
    Person1.LastName = "xxxx";
    cout << Person1.FullName() << endl;
```

So,

Person1 is a **object** form data type **class person.**

We always dealing with the **Objects** after defining its **Classes**.

<aside>
💡

> The **class** defines the structure, The **object** stores the actual data.
> 
</aside>
