# Homeworkk Repository

This repository contains C++ code showcasing the concepts of multiple inheritance, constructors, and method overriding. The main focus of the code is to demonstrate inheritance using two base classes, `Midl` and `Mid2`, and a derived class `Final`.

## Code Explanation

### Description 1: Initialization of Base Classes
The classes `Midl` and `Mid2` are initialized with integer values using parameterized constructors. The `Final` class, which inherits from both, explicitly calls these constructors in its initialization list.

### Description 2: Multiple Inheritance
The `Final` class successfully inherits methods from both `Midl` and `Mid2`. This allows the derived class to use functionalities from both base classes without conflict.

## Code Output Examples

### Output Example 1:
When the code is executed, the following output is produced:
```
Midl number is 1
Mid2 number is 2
```

### Output Example 2:
If the `Final` object is initialized as `Final f(5, 10);`, the output will change to:
```
Midl number is 5
Mid2 number is 10
```

## Usage
- Compile and run the code using a C++ compiler to observe inheritance and constructor initialization.
- Modify the constructor values of `Final` to test how values propagate to the base classes.

---
Feel free to explore, modify, and expand the code to experiment with C++ object-oriented principles.