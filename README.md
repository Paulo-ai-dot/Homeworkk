# Multiple Inheritance Example in C++

## Overview
This C++ program demonstrates **multiple inheritance**, where a derived class (`Final`) inherits from two base classes (`Midl` and `Mid2`).

## Code Structure

### Base Classes

#### `Midl` Class
- **Purpose**: Represents a simple class with a number attribute
- **Members**:
  - `private int number`: Stores an integer value
  - `Midl(int num)`: Constructor that initializes the number
  - `void Midl_function()`: Outputs the Midl number to console

#### `Mid2` Class
- **Purpose**: Similar to Midl, represents another class with a number attribute
- **Members**:
  - `private int number`: Stores an integer value
  - `Mid2(int num)`: Constructor that initializes the number
  - `void Mid2_function()`: Outputs the Mid2 number to console

### Derived Class

#### `Final` Class
- **Purpose**: Inherits from both `Midl` and `Mid2` using multiple inheritance
- **Syntax**: `class Final : public Midl, public Mid2`
- **Constructor**: 
  - Takes two parameters (`num1` and `num2`)
  - Initializes the `Midl` base class with `num1`
  - Initializes the `Mid2` base class with `num2`

## How It Works

1. **Object Creation**: `Final f(1, 2);` creates a Final object
   - Passes `1` to the Midl constructor
   - Passes `2` to the Mid2 constructor

2. **Function Calls**:
   - `f.Midl_function();` outputs: `Midl number is 1`
   - `f.Mid2_function();` outputs: `Mid2 number is 2`

## Output
```
Midl number is 1
Mid2 number is 2
```

## Key Concepts

- **Multiple Inheritance**: The `Final` class inherits from two independent base classes
- **Constructor Initialization List**: Uses member initializer list to call base class constructors
- **Public Inheritance**: Both base classes are inherited publicly, making their public methods accessible through Final objects

## Compilation and Execution
```bash
g++ -o m m.cpp
./m
```
