# Notes about objects in Arrays and Vectors

## A. **Nameless (Temporary) Objects**

- **Definition:** Objects created without a name, usually in expressions or initializer lists, e.g., `clsA(10)`.
- **Behavior:**
    - Exist **only during the full expression** in which they are created.
    - Automatically destroyed after the expression ends.
    - Can be **copied or moved** into a named object or container.

**Example:**

```cpp
clsA obj[] = { clsA(10), clsA(20), clsA(30) };
```

- `clsA(10)` is a **temporary object** in the initializer list.
- Compiler may **construct `obj[0]` directly from it** or use copy/move optimizations.
- You don’t need to manage its lifetime manually.

## B. Objects in arrays or vectors are “nameless” in terms of code variables

### 1. Objects in arrays or vectors are “nameless” in terms of code variables

```cpp
clsA obj[] = { clsA(10), clsA(20), clsA(30) };
```

- You **did not declare separate variables** like `clsA a1(10), a2(20), a3(30);`
- Yet, each element in the array **is a fully-fledged object**.
- You **access them via index**: `obj[0]`, `obj[1]`, `obj[2]`.

**Important:** The “namelessness” just means **you don’t have a separate variable name** for each object.

- The array **itself manages the storage**.
- Each element has a **stable memory location**, so you can call methods or access members using the index.

### **2. How the compiler treats them**

- In memory, the array looks like this:

| Index | Object | Member `x` |
| --- | --- | --- |
| 0 | clsA | 10 |
| 1 | clsA | 20 |
| 2 | clsA | 30 |
- Each object exists **exactly like a normal named object**, just without a variable name.
- You can do everything with it that you could with a named object:

```cpp
obj[0].Print();   // calls method
obj[1].x = 50;    // modifies member
```

### **3. Objects in Arrays**

- **Static arrays (stack):**
    - Size known at compile time.
    - Objects can be constructed directly with constructors using initializer lists.
    - No need for `new`/`delete`.
- **Dynamic arrays (heap) using `new[]`:**
    - Size can be determined at runtime.
    - Objects are default-constructed first.
    - Assigning them later with `clsA(i)` invokes **copy assignment**, not the constructor.
    - Must use `delete[]` to avoid memory leaks.

**Rule of thumb:** If you don’t need dynamic sizing, **prefer static arrays or `std::vector`**.

### **4. Using the Objects**

- Even if objects are **temporaries when created**, once stored in an array/vector, they have a **stable memory location** and can be accessed by **index**:

```cpp
obj[0].Print();
vec[1].Print();
```

- You **don’t need to give a name** to the temporary objects if your goal is just to initialize the container.

### 4. With vectors

- The objects in the vector **don’t have explicit variable names**, but you access them with `vec[0]`, `vec[1]`, `vec[2]`.
- `std::vector<clsA>` can store objects just like arrays, but safer:
    - Can use `push_back(clsA(10))` → temporary object is **copied/moved** into the vector.
    - Objects live as long as the vector lives.
    - Memory is allocated properly.
    - Memory is managed automatically.
    - Size can grow dynamically.

**Example:**

```cpp
vector<clsA> vec;
vec.push_back(clsA(10));
vec.push_back(clsA(20));
vec.push_back(clsA(30));
```

### **5. Key Notes about “nameless objects in arrays/vectors”**

1. **Stable storage:** Once inside the array/vector, each object behaves like a normal object.
2. **Access:** You use **indices** to call methods or change data.
3. **No variable name needed:** The container “owns” the object, so explicit naming is optional.
4. **Lifetimes:**
    - In **arrays** → lifetime tied to the array.
    - In **vectors** → lifetime tied to the vector; moved/copied as vector grows.
5. **Temporary objects for initialization:**
    - Can use parameterized constructors directly in initializer lists or `push_back()`.
    - Compiler handles copying/moving into the container.