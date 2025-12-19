# Objects and Dynamic Arrays

```c
#include <iostream>
using namespace std;

class clsA
{
public:
    clsA()
    {
        // Dummy constructor
    }

    clsA(int value)
    {
        x = value;
    }

    int x;

    void Print()
    {
        cout << "The Value of x = " << x << endl;
    }
};

int main()
{
    // we want a dynamic array of 5 members.
    int NumberOfArrayItems = 5;
    // if we comment out the default constructor there is an error that will be generated here.
    // thats because object dynamic array allocating uses the class default constructor.
    clsA *arrA = new clsA[NumberOfArrayItems];

    // creating temporary objects that calls the parameterized constructor and coppying its values to the dynamic array items.
    for (int i = 0; i < NumberOfArrayItems; i++)
    {
        arrA[i] = clsA(i);
    }

    // object is saved in the dynamic array and it deals with them without names just by index
    for (int i = 0; i < NumberOfArrayItems; i++)
    {
        arrA[i].Print();
    }

    // deleting the allocated memory in heap to avoid memory leak
    delete arrA;

    return 0;
}
```

## **Notes**

1. **Temporary Objects**
    - `clsA(i)` is temporary; it exists only during the assignment.
    - After the statement, it is automatically destroyed.
2. **Default Constructor vs. Parameterized Constructor**
    - Default constructor initializes the array elements when `new clsA[NumberOfObjects]` is called.
    - Parameterized constructor initializes temporary objects (`clsA(i)`).
3. **Copy Assignment vs. Copy Constructor**
    - **Copy assignment operator** (`=`) copies the temporary object into an **existing object**.
    - **Copy constructor** is **not used here**, because we are not creating a new object from an existing one.
    - Rule of thumb:
        - **Copy constructor** → new object from another object.
        - **Copy assignment** → existing object assigned from another object.
4. **Dynamic Arrays and Safety**
    - Using `new[]` requires `delete[]` to free memory.
    - Modern C++ prefers `std::vector` or `std::array` to avoid manual memory management.
5. **Execution Flow**
    
    ```sql
    1. Allocate array → default constructor called for each element
    2. For each element:
        a. Temporary object created → parameterized constructor
        b. Temporary copied to array element → copy assignment
        c. Temporary destroyed
    3. Print each element
    4. Free memory
    ```