# Passing Objects to Functions

## **By Value vs By Reference (By Val vs By Ref)**

### **Basic Concept**

**Objects = Data Types!**

Objects can be treated like any other data type:

- `int`, `bool`, `string`, `float` ← Basic data types.
- **Objects** ← Custom Data Types

### **Object Passing Capability**

- **Pass them as parameters to functions.**
- **In two different ways:** by value or by reference.

### **Class Used in Example**

```cpp
class clsA
{
public:
    int x;

    void Print()
    {
        cout << "The value of x=" << x << endl;
    }
};
```

## **Method 1: Pass by Value**

### **Concept:**

- **Creates a copy** of the original object.
- **Changes don't affect** the original object.
- **Preserves safety** of original data.

### **Syntax**

```cpp
// Pass by value - any updates will not be reflected on original object
void Fun1(clsA A1)  // Note: without & symbol
{
    A1.x = 100;  // Change on copy only
}
```

### **How Pass by Value Works?**

```
Original Object: A1.x = 50
         ↓
     Create Copy
         ↓
Copy in Function: A1.x = 100  ← Change copy
         ↓
Original Object: A1.x = 50    ← Remains unchanged!

```

## **Method 2: Pass by Reference**

### **Concept:**

- **Works directly on original object.**
- **Changes are reflected** on original object.
- **More efficient** memory-wise.

### **Syntax**

```cpp
// Pass by reference - any updates will be reflected on original object
void Fun2(clsA &A1)  // Note: with & symbol
{
    A1.x = 200;  // Change on original object
}
```

### **How Pass by Reference Works?**

```
Original Object: A1.x = 50
         ↓
     Reference to Original (no copy)
         ↓
Modify Original: A1.x = 200   ← Direct change
         ↓
Original Object: A1.x = 200   ← Permanent change!

```

### **Complete Example: Practical Application**

```cpp
#include<iostream>
using namespace std;

class clsA
{
public:
    int x;

    void Print()
    {
        cout << "The value of x=" << x << endl;
    }
};

// Pass by value - doesn't affect original
void Fun1(clsA A1)
{
    A1.x = 100;
}

// Pass by reference - affects original
void Fun2(clsA &A1)
{
    A1.x = 200;
}

int main()
{
    clsA A1;
    A1.x = 50;

    cout << "\nA.x before calling function1: \n";
    A1.Print();  // Result: x = 50

    // Pass by value - object will not be affected
    Fun1(A1);
    cout << "\nA.x after calling function1 byval: \n";
    A1.Print();  // Result: x = 50 (no change!)

    // Pass by reference - object will be affected
    Fun2(A1);
    cout << "\nA.x after calling function2 byref: \n";
    A1.Print();  // Result: x = 200 (changed!)

    system("pause>0");
    return 0;
}
```

### **Expected Output:**

```
A.x before calling function1:
The value of x=50

A.x after calling function1 byval:
The value of x=50

A.x after calling function2 byref:
The value of x=200

```

## **Detailed Comparison**

| **Feature** | **By Value (By Val)** | **By Reference (By Ref)** |
| --- | --- | --- |
| **Syntax** | `func(Object obj)` | `func(Object &obj)` |
| **Create Copy** | ✅ Creates copy | ❌ No copy |
| **Affect Original** | ❌ No effect | ✅ Affects |
| **Memory Usage** | 🔴 Higher | 🟢 Lower |
| **Speed** | 🔴 Slower | 🟢 Faster |
| **Safety** | 🟢 Safe | 🔴 Requires caution |

## **When to Use Each Method?**

### **Use Pass by Value when:**

- **No need to modify** original object.
- **Preserving data safety.**
- **Small-sized objects.**

### **Use Pass by Reference when:**

- **Need to modify** original object.
- **Large-sized objects** (save memory).
- **Performance improvement** (avoid copying).

## **Practical Usage Examples**

### **Example 1: Data Display Function (by value)**

```cpp
void DisplayStudent(Student student)  // By value - safe
{
    cout << "Name: " << student.getName() << endl;
    cout << "Grade: " << student.getGrade() << endl;
    // Cannot modify original data
}
```

### **Example 2: Data Update Function (by reference)**

```cpp
void UpdateSalary(Employee &emp, float newSalary)  // By reference
{
    emp.setSalary(newSalary);  // Modify original salary
}
```

### **Example 3: Safe Read Function (const reference)**

```cpp
void PrintEmployee(const Employee &emp)  // Read-only + efficient
{
    emp.print();  // Cannot modify due to const
}
```

## **Best Practices**

### **Golden Rules:**

1. **Read-only:** `const Object &obj` (best)
2. **For modification:** `Object &obj`
3. **Protect original:** `Object obj` (by value)

### **Performance Tips:**

- **Small objects:** by value acceptable
- **Large objects:** always use reference
- **For reading:** always use `const &`

## **Summary**

### **Important Points:**

1. **Objects = Data Types** that can be passed to functions.
2. **By Value:** safe copy, doesn't affect original.
3. **By Reference:** direct work on original, more efficient.
4. **Choose method based on need:** safety vs efficiency.

## **General Rule:**

**Use reference for efficiency, value for safety!**

## Example using Static functions with `this` Pointer

```cpp
#include <iostream>
using namespace std;

class clsPerson
{
    private:
    int _ID;
    string _Name;
    double _Salary;
    public:
    clsPerson (int ID, string Name, double Salary)
    {
        _ID = ID;
        _Name = Name;
        _Salary = Salary;
    }
    void Print ()
    {
        cout << "\nData\n";
        cout << "ID     : " <<  _ID << endl;
        cout << "Name   : " << _Name << endl;
        cout << "Salary : " <<  _Salary << endl; 
    }
    static void  ModSalary(clsPerson P1)
    {
        P1._Salary += 500;
    }
    static void  ModSalary2(clsPerson &P1)
    {
        P1._Salary += 500;
    }
    void Func1 ()
    {
        ModSalary(*this);
    }
        void Func2 ()
    {
        ModSalary2(*this);
    }
};

int main ()
{
    clsPerson P1(23, "Kero", 4000);
    P1.Func1();
    P1.Print();
    P1.Func2();
    P1.Print();

    return 0;
}
```