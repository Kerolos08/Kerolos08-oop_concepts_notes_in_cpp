# Copy Constructor

## What is Copy Constructor

**Copy constructor** is a special constructor used to create a new object as a **copy of an existing object** by **initializing** the members of a **newly created object** by **copying** the members of an already **existing object.**

## Default vs user-defined copy constructor

- If you **don't** provide a copy constructor, the compiler gives you an automatic one that copies every non-static data member (a **member-wise shallow copy**).
- If your class owns resources (raw pointers, file handles, sockets), the default shallow copy can create bugs (double delete, dangling pointer). In such cases you must define a copy constructor that performs a **deep copy**.

## Shallow vs Deep Copy

### Shallow Copy

If we have a pointer pointing to an array or a variable in the Heap in your class and we didn’t use a user defined copy constructor the compiler will create a default one that will make a Member-Wise Shallow Copy, As we said before it will create bugs as we have pointers in our class.

The **second object that will be created** will store the **same value that stored in the first class pointer member** which is the **Hex-Decimal Location** of the **Heap variable** that created, So the **two pointers** in both the old and the new objects are **pointing to the same location** (the Heap variable in this case is **shared between the two objects**) So **any changes that will done to the Heap variable throw the second object will change in the first one as the Heap variable is shared between them**.

```cpp
// Shallow copy example using the compiler Default copy constructor
const short Max_List_Number = 100;

class clsCopy
{
    private:
    int * List;
    public:
    clsCopy ()
    {
        List = new int [Max_List_Number];
        for (short i = 0; i < Max_List_Number; i++)
        {
            List[i] = -1;
        }
    }
    void SetIndex (short Idx, short Value)
    {
        List[Idx] = Value;
    }
    void GetData (short N)
    {
        for (short i = 0; i < N; i++)
        {
            cout << List[i] << " ";
        }
        cout << "\n";
    }
    // need to delete the allocated array
};

int main ()
{
    clsCopy OBJ1;
    OBJ1.GetData(5); // -1 -1 -1 -1 -1

    clsCopy OBJ2 = OBJ1;
    OBJ2.SetIndex(2, 10);

    OBJ2.GetData(5); // -1 -1 10 -1 -1
    OBJ1.GetData(5); // -1 -1 10 -1 -1

    return 0;
}
```

[Imgur](https://i.imgur.com/rabPn1h.png)

### Deep Copy

It’s **done manually** with zero dependence on the **compiler** as we **allocate another variable or array in the Heap** with **complete different addresses** and copy the old object allocated array member **one by one manually**.

That leads to having **two complete variable or arrays in the heap** each of them **belonging to it’s object**.

```cpp
const short Max_List_Number = 100;

class clsCopy
{
    private:
    int * List;
    public:
    clsCopy ()
    {
        List = new int [Max_List_Number];
        for (short i = 0; i < Max_List_Number; i++)
        {
            List[i] = -1;
        }
    }
    clsCopy (const clsCopy & OBJ)
    {
        List = new int [Max_List_Number];
        for (short i = 0; i < Max_List_Number; i++)
        {
            List [i] = OBJ.List[i];
        }
    }
    void SetIndex (short Idx, short Value)
    {
        List[Idx] = Value;
    }
    void GetData (short N)
    {
        for (short i = 0; i < N; i++)
        {
            cout << List[i] << " ";
        }
        cout << "\n";
    }
};

int main ()
{
    clsCopy OBJ1;
    OBJ1.GetData(5); // -1 -1 -1 -1 -1

    clsCopy OBJ2 = OBJ1;
    OBJ2.SetIndex(2, 10);

    OBJ2.GetData(5); // -1 -1 10 -1 -1
    OBJ1.GetData(5); // -1 -1 10 -1 -1

    return 0;
}
```

[Imgur](https://i.imgur.com/VHXBA52.png)

## Syntax

```cpp
ClassName (const ClassName & obj)
{
//body
}
```

**Example**

```cpp
	clsAddress (const clsAddress & obj)
    {
        _AddressLine1 = obj._AddressLine1;
        _AddressLine2 = obj._AddressLine2;
        _POBox = obj._POBox;
        _ZipCode = obj._ZipCode;
    }
```

```cpp
int main()
{
    clsAddress Address1("Queen Alia Street","B 303 ","11192","5555");
    Address1.PrintAddress();

    clsAddress Address2 = Address1;
    Address2.PrintAddress();

    return 0;
}
```

## Why Passing the object to the constructor by Ref.

### By Value

- If it is passed by **Value** that leads to a Copy Process of the old one to the Parameter of the Copy Constructor and that leads to an infinite Recursion then a Stack Overflow.
    - The compiler must **copy the old object into `obj`** (because it’s pass-by-value).
    - But copying an object **requires the copy constructor** itself.
    - So it tries to call the copy constructor again…
    - Which again requires a copy…
    - Infinite recursion → **stack overflow**.
    
    ```lua
    newObj <-- CopyConstructor(oldObj by value)
              |
              |---> needs a copy of oldObj
                      |
                      |---> calls CopyConstructor again...
                               |
                               |---> again...
    ```
    

### By Reference

- If it passed by Ref. the compiler only Accessing the old object without copying it, that makes no problem.
    - The compiler just makes `obj` an **alias** to the old object.
    - No copy is made to pass it.
    - Inside the constructor, you then copy the members manually.
    - No recursion → works perfectly.
    
    ```lua
    newObj <-- CopyConstructor(const oldObj&)
              |
              |---> directly refers to oldObj (no copy)
                      |
                      |---> safely copy fields
    ```
    

## why using `const` in syntax

- **Prevent accidental modification**
    - To make sure that if you tried to modify `obj` the compiler will complain, This guarantees the original object stays unchanged.
- **Allow copying from temporary or constant objects**
    - To make sure that you can’t bind a `const` object to a non-const reference.

So that provides both **Safety** (prevents modifying the source object) and **Flexibility** (allows copying from const objects and temporaries).

# Quiz

- **The copy constructor is used to initialize the members of a newly created object by copying the members of an already existing object.**
    - **True**
- **The process of initializing members of an object through a copy constructor is known as copy initialization.**
    - **True.**

- **It is also called member-wise initialization because the copy constructor initializes one object with the existing object, both belonging to the same class on a member-by-member copy basis.**
    - **True.**

- **The copy constructor can be defined explicitly by the programmer. If the programmer does not define the copy constructor, the compiler does it for us.**
    - **True.**

- **You should always implement a copy constructor in your code.**
    - **No, because the compiler will do it for you.**

- **What are the types of constructors:**
    - **Default constructor**
    - **Parameterized constructor**
    - **Copy constructor**

- **Can you have more than one constructor in a class?**
    - **Yes, you can using function overloading and this is called a “Constructor Overloading”.**
