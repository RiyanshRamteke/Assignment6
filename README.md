# Assignment 6: Implementation of Different Types of Inheritance in C++

## About the Program

This C++ program demonstrates all five types of inheritance:

| Type | Classes used | Meaning |
|---|---|---|
| Single | `Animal` -> `Dog` | One derived class from one base class |
| Multilevel | `Grandfather` -> `Father` -> `Son` | A chain of classes |
| Multiple | `Writer` + `Singer` -> `Artist` | One derived class from two base classes |
| Hierarchical | `Shape` -> `Rectangle`, `Triangle` | Two derived classes from one base class |
| Hybrid | `Student` -> `Test`, `Sports` -> `Result` | Combination of hierarchical and multiple inheritance |

In the hybrid inheritance, the keyword `virtual` is used (`class Test : virtual public Student`) so that the `Result` class gets only one copy of `Student`. This solves the diamond problem.

## Program Flow

1. **Single:** A `Dog` object calls `eat()` (from `Animal`) and `bark()`.
2. **Multilevel:** A `Son` object calls the functions of `Grandfather`, `Father` and `Son`.
3. **Multiple:** An `Artist` object calls `write()` and `sing()`.
4. **Hierarchical:** `Rectangle` and `Triangle` use the common data of `Shape` (10 and 5) and print their areas.
5. **Hybrid:** Takes roll number, test marks and sports score as input and prints the total.

## Files

| File | Description |
|---|---|
| `assi6.cpp` | C++ source code |
| `README.md` | Project description |

## How to Compile and Run

Requirement: a C++ compiler (g++) or Visual Studio Code with a C++ setup.

```bash
g++ assi6.cpp -o assi6
./assi6
```

On Windows PowerShell use `.\assi6` to run.

## Sample Input and Output

**Input:**

```
101 80 15
```

**Output:**

```
--- 1. Single Inheritance ---
Animal eats food
Dog barks

--- 2. Multilevel Inheritance ---
Grandfather owns the house
Father owns the shop
Son is a student

--- 3. Multiple Inheritance ---
Artist writes a song
Artist sings the song

--- 4. Hierarchical Inheritance ---
Area of Rectangle = 50
Area of Triangle = 25

--- 5. Hybrid Inheritance ---
Enter roll no, test marks and sports score: Roll No      = 101
Test marks   = 80
Sports score = 15
Total        = 95
```

## Test Cases

| Test Case | Input | Expected Result |
|---|---|---|
| 1 | `101 80 15` | Rectangle area = 50, Triangle area = 25, hybrid total = 95 |
| 2 | `102 60 10` | Rectangle area = 50, Triangle area = 25, hybrid total = 70 |

## Learning Outcomes

- Create a derived class from a base class using the correct syntax.
- Identify and implement single, multilevel, multiple, hierarchical and hybrid inheritance.
- Access base class members using the object of a derived class.
- Use a virtual base class to avoid the diamond problem.
- Reuse existing code and reduce repetition.

## Repository Details

- **Repository:** https://github.com/YOUR_USERNAME/Assignment6
- **Branch:** main
