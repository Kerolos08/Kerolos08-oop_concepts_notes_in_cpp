# Static Members

## What is Static Member (Attribute)?

A class member variable that is **shared** among **all objects** of that class, instead of each object having its own copy.

## Static Data Attribute Properties

- Declared with the keyword `static` inside the class.
- Only **one copy** exists in memory, no matter how many objects are created.
- Shared by all objects of the class.
- Must be **defined outside** the class.
- Useful for keeping track of information common to all objects.

## Why it should be defined outside the class

- When you declare a **static attribute inside a class**, the compiler only records:
    
     “This class has one shared variable for all objects.”
    
    (No memory allocated yet — just a declaration / promise.)
    
- You then **define it outside the class**:
    
    “Here is the actual storage in static/global memory for that variable.”
    
    (Now memory is allocated in the program’s **data segment**, like a global variable.)
    
- This way:
    - All objects of the class (and even the class itself) can use the same variable.
    - Only **one copy** exists for the entire program.
    
    ### Conclusion
    
    - Inside class = *the rule* (“all objects share one”).
    - Outside class = *the box* where that one shared thing actually lives.

## Code

```cpp
#include <iostream>
using namespace std;

class clsA
{
    public:
    int Var;
    static int Counter; // shared variable (class level not an object level)
    clsA ()
    {
        // this is a  constructor
        Counter++;
    }
    void Print ()
    {
        cout << "\nVar = " << Var << endl;
        cout << "counter = " << Counter << endl;
    }

};

int clsA::Counter = 0;

int main ()
{
    clsA A1, A2, A3;
    A1.Var = 10;
    A2.Var = 20;
    A3.Var = 30;

    A1.Print();
    A2.Print();
    A3.Print();

    A1.Counter = 100; // counter is a static attribute that is shared for all clsA objects
    cout << "\nAfter changing the static memeber counter value in one object" << endl;

    A1.Print();
    A2.Print();
    A3.Print();

    return 0;
}
```

## Quiz

- **Static Member is a variable that is shared for all objects, any object modifies it it get modified for all other objects.**
    - **True.**

- **Each Object has it's own static members.**
    - **False.**

- **Static members are on the class level not for each object.**
    - **True.**

- **Static Members are accessible from all objects.**
    - **True.**