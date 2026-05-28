# Homeworkk Repository

This repository contains C++ code showcasing object-oriented concepts such as multiple inheritance, constructors, and constructor call order. The project is intended for educational purposes to demonstrate how base and derived classes interact during initialization.

## Files in this repository
- main.cpp (multiple inheritance example)
- derived_constructors.cpp (base/derived constructor initialization example)
- README.md (this file)

---

## Multiple Inheritance Example (main.cpp)

Description 1: Initialization of Base Classes
- The classes `Midl` and `Mid2` are initialized with integer values using parameterized constructors. The `Final` class, which inherits from both, explicitly calls these constructors in its initialization list.

Description 2: Multiple Inheritance
- The `Final` class successfully inherits methods from both `Midl` and `Mid2`. This allows the derived class to use functionalities from both base classes without conflict.

Output Example 1:
```
Midl number is 1
Mid2 number is 2
```

Output Example 2:
If the `Final` object is initialized as `Final f(5, 10);`, the output will change to:
```
Midl number is 5
Mid2 number is 10
```

---

### Derived Constructors Example (derived_constructors.cpp)

Description
- Demonstrates how base and derived constructors run and how a derived constructor can call a specific base constructor.
- `Base` has:
  - a default constructor that sets `Base_num = 1` and prints "Constructor of base class".
  - a parameterized constructor `Base(int n1)` that sets `Base_num = n1` and also prints "Constructor of base class".
- `Derived` inherits from `Base` and has:
  - `Derived(int n1)`: does not explicitly call a `Base` constructor, so `Base()` (default) runs first.
  - `Derived(int n1, int n2) : Base(n1)`: explicitly calls `Base(int)`.
- The program prints the constructor messages and then prints the `Base_num` and `Derived_num` values for each object to demonstrate initialization.

Compilation / Run
- Compile: g++ derived_constructors.cpp -o derived
- Run: ./derived

Example outputs
- Running the program as written (creates `ptr1` then `ptr2`):
```
Constructor of base class
Constructor of derived class
ptr1 -> Base_num: 1, Derived_num: 2
Constructor of base class
Constructor of derived class
ptr2 -> Base_num: 1, Derived_num: 2
```
Explanation: For `ptr1 = new Derived(2)` the `Base` default constructor runs (sets `Base_num = 1`) then `Derived` sets `Derived_num = 2`. For `ptr2 = new Derived(1, 2)` the parameterized `Base(int)` runs with `n1 = 1` (sets `Base_num = 1`) then `Derived` sets `Derived_num = 2`.

- If only `ptr2` is created (`Derived(1,2)`):
```
Constructor of base class
Constructor of derived class
ptr2 -> Base_num: 1, Derived_num: 2
```

---

Feel free to open issues or send a pull request if you'd like additional examples, tests, or a build script. Contributions are welcome.