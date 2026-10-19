# C Programming Journey

A structured repository tracking my code, practice exercises, and problem sets as I master C programming, based on **"The Ultimate C Handbook" by CodeWithHarry**.

## Overview & Reference Syllabus

This repository documents my progress through fundamental and low-level computing concepts using the **GCC (MinGW)** compiler suite and **Visual Studio Code**.

The exercises directly follow the topics and problem sets outlined in the handbook:

* **Chapter 0**: Getting Started, Toolchains & First Programs
* **Chapter 1**: Variables, Constants, Keywords & Standard I/O
* **Chapter 2**: Instructions, Operators & Precedence
* **Chapter 3**: Conditional Instructions & Decision Making
* **Chapter 4**: Loop Control Instructions (`while`, `do-while`, `for`)
* **Milestone Projects**: Number Guessing Game (Project 1) and Snake, Water, Gun (Project 2)
* **Upcoming Chapters**: Functions & Recursion (Ch 5), Pointers (Ch 6), Arrays (Ch 7), Strings (Ch 8), Structures (Ch 9), File I/O (Ch 10), and Dynamic Memory Allocation (Ch 11).

---

## Chapter Breakdown & Code Index

### Chapter 0: Environment Setup & First Program

* **Core Concepts:**
  * Standard program entry point: `int main()`
  * Standard I/O header: `#include <stdio.h>`
  * Standard formatted output: `printf()`
  * Exit status reporting: `return 0`

| File | Description | Handbook Topic |
| :--- | :--- | :--- |
| `0_text.c`| Prints initial greeting lines to console standard output | "Our first c program" (p. 8)|

---

### Chapter 1: Variables, Constants & Standard I/O

* **Core Concepts:**
  * **Data Types & Format Specifiers**: `int` (`%d`), `float` (`%f` / `%.2f`)
  * **Input & Memory Addressing**: `scanf("%d", &variable)` using the address-of operator (`&`)
  * **Arithmetic Instructions**: Evaluation of mathematical formulas in C

#### Implemented Exercises & Practice Set Mapping

| File | Problem Statement & Handbook Mapping | Formula / Logic |
| :--- | :--- | :--- |
| `01_variables.c`| **Variables & Output**: Declaring and initializing an integer variable| Assignment: `a = 69;` |
| `01_rectanleproblem.c.c`| **Practice Set 1(a)**: Calculate rectangle area with hardcoded values | $\text{Area} = a \times b$|
| `01_rectanglepromblem2.c` | **Practice Set 1(b)**: Calculate rectangle area using interactive input from `scanf()` | $\text{Area} = \text{length} \times \text{width}$ |
| `01_circle.c`| **Practice Set 2**: Calculate circle area based on user-entered radius | $\text{Area} = \pi r^2$ ($\pi \approx 3.14$)|
| `01_triangle.c` | **Arithmetic Practice**: Calculate triangle area given base and height | $\text{Area} = \frac{\text{base} \times \text{height}}{2}$|
| `01_n3.c` | **Arithmetic Practice**: Compute the cube ($n^3$) of an integer| $\text{Result} = n^3 = n \times n \times n$|

---

### Chapter 2: Instructions and Operators

* **Core Concepts:**
  * **Operator Priority**: High priority (`*`, `/`, `%`) over low priority (`+`, `-`), followed by assignment (`=`)
  * **Associativity**: Left-to-right evaluation for operators sharing equal precedence
  * **Type Conversion**: Automatic promotion (`int` with `float` $\rightarrow$ `float`) and demotion upon integer assignment
  * **Logical Conditions**: Logical AND (`&&`) and logical OR (`||`) decision checking

#### Implemented Exercises & Practice Set Mapping

| File | Problem Statement & Handbook Mapping | Formula / Logic |
| :--- | :--- | :--- |
| `02_MDRASrule.c`| **Operator Precedence**: Evaluation order and associativity rules | Precedence: `* / %` before `+ -` |
| `02_divisibilitytest.c`| **Practice Set 3**: Check whether an entered integer is divisible by 97 | Remainder test: `number % 97 == 0` |
| `02_decimal-interger.c` | **Type Conversion**: Behavior of arithmetic between `int` and `float` types| Type demotion & promotion rules |
| `02_ANDproblem.c`| **Logical AND Operator**: Condition evaluation requiring all expressions to be true | Syntax: `cond1 && cond2` |
| `02_ORproblem.c`| **Logical OR Operator**: Condition evaluation where at least one condition is true| Syntax: `cond1 || cond2` |

---

### Chapter 3: Conditional Instructions

* **Core Concepts:**
  * **Branching Statements**: `if`, `else if`, and `else` decision ladders
  * **Relational Comparison**: Operators `==`, `!=`, `<`, `>`, `<=`, `>=`.
  * **Decision Control**: Multi-condition evaluation and conditional value assignments

#### Implemented Exercises & Practice Set Mapping

| File | Problem Statement & Handbook Mapping | Formula / Logic |
| :--- | :--- | :--- |
| `03_PASSandFAILcondition.c`| **Practice Set 2**: Validate whether a student passed with total $\ge 40\%$ and each subject $\ge 33\%$ | `(total >= 40) && (s1 >= 33 && s2 >= 33 && s3 >= 33)`|
| `03_grade.c`| **Quick Quiz (p. 20)**: Assign letter grades ($A, B, C, D, F$) based on percentage brackets | Multi-branch `if-else if-else` scale|
| `03_ARMSTRONGS.c` | **Algorithmic Conditionals**: Determine whether an input integer is an Armstrong number | Digit extraction & check: $\sum (\text{digit}^3) == n$|

---

### Chapter 4: Loop Control Instructions


* **Core Concepts:**
  * **Loop Constructs**: `while` (pre-condition check), `do-while` (executes at least once), and `for` loops
  * **Counters & Steps**: Increment (`++`), decrement (`--`), and compound assignment operators
  * **Iteration Control**: `break` to exit loops and `continue` to jump to the next iteration

#### Implemented Exercises & Practice Set Mapping

| File | Problem Statement & Handbook Mapping | Formula / Logic |
| :--- | :--- | :--- |
| `04_table.c`| **Practice Set 1**: Generate the multiplication table for an input number $n$ | `for (i = 1; i <= 10; i++) printf("%d x %d = %d", n, i, n*i);` |
| `04_sum.c`| **Practice Set 5**: Calculate the running sum of first $n$ natural numbers| Accumulator: `sum += i;` |
| `04_input.c`| **Loop Input Control**: Taking user inputs within iterative conditional loops| Repeated standard stream capture via `scanf()` |
| `04_taking.c` | **Dynamic Bounds**: Accepting terminal inputs to set variable loop limits| Dynamic loop boundary evaluation |
| `04_BTW.c` | **Break & Continue**: Controlling loop execution flow and skipping iterations | Early exit via `break` and step skip via `continue` |

---

## Milestone Projects

### Project 1: Number Guessing Game

* **Overview:** A random number generator game where the user guesses a hidden number between 1 and 100.
* **Feedback Mechanism:** Informs the player `"Higher number please"` or `"Lower number please"` after each guess.
* **Tracking:** Counts and displays the total number of attempts upon winning.
* **Key Concepts:** `rand()`, `srand(time(0))`, `do-while` loops, and comparison ladders.

### Project 2: Snake, Water, Gun Game

* **Overview:** A CLI implementation of the classic Indian variant of Rock, Paper, Scissors played against the computer.
* **Rules Matrix:**
  * Snake (`s`) vs Water (`w`) $\rightarrow$ Snake wins (drinks water)
  * Water (`w`) vs Gun (`g`) $\rightarrow$ Water wins (drowns gun)
  * Gun (`g`) vs Snake (`s`) $\rightarrow$ Gun wins (shoots snake)
  * Matching inputs $\rightarrow$ Draw
* **Key Concepts:** Random selection generation, character stream parsing, modular referee functions, and conditional checking.

---

## Toolchain & How to Run

### Requirements

* **Compiler**: GCC / MinGW
* **Editor**: Visual Studio Code

### Compilation & Execution Commands

Run the following commands in your terminal to compile and run any source file:

```bash
# 1. Compile a C source file into an executable binary
gcc 04_table.c -o table

# 2. Run the executable
# On Windows:
.\table.exe

# On Linux / macOS:
./table
```
## Learning Map & Curriculum Progress

Tracked against the complete syllabus from the handbook:

```text
[Chapter 00] ──> [Chapter 01] ──> [Chapter 02] ──> [Chapter 03] ──> [Chapter 04] ──> [Project 01]
 Setup & First    Variables,       Operators &      Decision         Loops & Iteration   Number Guessing
 Program          Standard I/O     Precedence       Making (if/else) (while, for)        Game
     │                 │                │                │                │                   │
   [DONE]            [DONE]           [DONE]           [DONE]           [DONE]             [PLANNED]
     │
     └──> [Chapter 05] ──> [Chapter 06] ──> [Chapter 07] ──> [Chapter 08]
           Functions &      Pointers &       Arrays &         Strings & Buffers
           Recursion        Reference        Matrices         (<string.h>)
               │                │                │                │
           [PLANNED]        [PLANNED]        [PLANNED]        [PLANNED]
               │
               └──> [Chapter 09] ──> [Chapter 10] ──> [Project 02] ──> [Chapter 11]
                     Structures &     File I/O         Snake Water Gun  Dynamic Memory
                     typedef          Streams          Game (CLI)       (malloc/free)
                         │                │                │                │
                     [PLANNED]        [PLANNED]        [PLANNED]        [PLANNED]
```
##  Author

<div align="left">

**Bhavesh Saini**  
[![GitHub](https://img.shields.io/badge/GitHub-bhaveshsaini12-181717?style=flat&logo=github)](https://github.com/bhaveshsaini12)
[![C](https://img.shields.io/badge/Language-C-A8B9CC?style=flat&logo=c)](https://en.wikipedia.org/wiki/C_(programming_language))

An Information science student building core systems and low-level programming fundamentals through daily practice and algorithmic problem solving.

* **Repository:** [c-programming-journey](https://github.com/bhaveshsaini12)
* **Syllabus Followed:** [*The Ultimate C Handbook* by CodeWithHarry](https://www.codewithharry.com)

</div>
