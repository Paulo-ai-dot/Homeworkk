# Multiple Inheritance Example in C++

## Overview
This C++ program demonstrates multiple and virtual inheritance to address the diamond problem. It shows how the `Final` class can inherit from two intermediate classes (`Midl` and `Mid2`) that both virtually inherit from a common base (`Base`). This avoids redundant copies of the base class properties.

## Explanation of the Code

### Base Class
- Contains:
  - `int number`: An integer to hold a value.
  - Constructor: Initializes `number`.
  - `void Base_function()`: Prints the content of `number`.

### `Midl` and `Mid2`
- Both classes virtually inherit from `Base`.
- Use the `Base` constructor for initialization, reducing ambiguity.

### `Final` Class
- Inherits from both `Midl` and `Mid2`.
- The constructor initializes `Base` to ensure it is only constructed once, resolving the diamond problem.

### Code Workflow
1. The `Base` constructor is called using virtual inheritance, so only one instance of `Base` exists despite multiple inheritances.
2. An object of the `Final` class is created (`Final f(1)`).
3. Function `Base_function()` is accessible directly via the `Final` class object and is called.

## Output
When the program is executed, it produces the following output:
```
Base number is 1
```

## Compilation and Execution
To compile and run the program, use the following commands:
```bash
g++ -o main example_virtual_inheritance.cpp
./main
```