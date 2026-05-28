# Homeworkk Repository

This repository contains C++ code showcasing object-oriented concepts such as multiple inheritance, constructors, destructors, and constructor/destructor call order in base and derived classes. The project is intended for educational purposes to demonstrate how these object-oriented features interact.

## Files in this repository
- main.cpp (multiple inheritance example)
- derived_constructors.cpp (base/derived constructor initialization example)
- destructors_example.cpp (base/derived destructor call order example)
- README.md (this file)

---

## Multiple Inheritance Example (main.cpp)

### Description
This example demonstrates multiple inheritance where the `Final` class inherits functionality from two base classes, `Midl` and `Mid2`. Both base classes are parameterized, and `Final` explicitly calls their constructors to initialize its inherited values.

### Output Examples:
- When `Final f(1, 2)` is created:
```
Midl number is 1
Mid2 number is 2
```
- When `Final f(5, 10)` is created, output changes to:
```
Midl number is 5
Mid2 number is 10
```

---

## Derived Constructors Example (derived_constructors.cpp)

### Description
This example demonstrates how constructors in base and derived classes run during object initialization, and how a derived class can explicitly call a specific base constructor.

- `Base` has:
  - A default constructor that sets `Base_num = 1`.
  - A parameterized constructor `Base(int n1)` that sets `Base_num` to the provided value.
- `Derived` inherits from `Base` and has:
  - `Derived(int n1)`: Initializes the derived class and uses the default base constructor.
  - `Derived(int n1, int n2): Base(n1)` initializes both base and derived classes explicitly.

### Output Examples:
- When executed with `Derived *ptr1 = new Derived(2)` and `Derived *ptr2 = new Derived(1, 2)`:
```
Constructor of base class
Constructor of derived class
ptr1 -> Base_num: 1, Derived_num: 2
Constructor of base class
Constructor of derived class
ptr2 -> Base_num: 1, Derived_num: 2
```

---

## Destructors Example (destructors_example.cpp)

### Description
This example demonstrates the order of destructor calls when dealing with inheritance. The `Derived` class inherits from the `Base` class.

- `Base` has a destructor that prints "Destructor of base class".
- `Derived` adds its own destructor that prints "Destructor of derived class".

When an object of the derived class is deleted, the destructors are called in reverse order of inheritance, ensuring proper cleanup.

### Output Example:
- When executed with `Derived *ptr1 = new Derived()` followed by `delete ptr1`:
```
Destructor of derived class
Destructor of base class
```
This illustrates that the derived class's destructor is called first, followed by the base class's destructor.

---

Feel free to open issues or send a pull request if you'd like additional examples, tests, or a build script. Contributions are welcome.