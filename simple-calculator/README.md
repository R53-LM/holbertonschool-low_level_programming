C - Simple Calculator

Introduction and Context
In this project you will build a terminal-based interactive calculator using the C programming language.

The objective is not to build a complex calculator, but to build a complete program: one that compiles cleanly, runs in a loop, performs correct calculations, and follows a defined interaction contract.

Until now, most exercises focused on isolated concepts (loops, conditionals, functions). This project combines those concepts into a single program that a real user can run.

A central part of this project is learning how input works in C. You will need to research how scanf behaves and understand its limitations. Some input cases are intentionally out of scope for the mandatory tasks and are addressed only in an optional advanced task.

This project is meant to help you evaluate your current level of autonomy and maturity as a programmer. If something feels harder than expected, that is a useful signal — not a problem.

Learning Objectives
By completing this project, you will be able to:

Design a small but complete C program from requirements.
Build a menu-driven application using loops and conditionals.
Structure code using functions to avoid duplication.
Implement arithmetic operations using basic language operators.
Read user input with scanf.
Handle important edge cases such as division by zero.
Produce C code that compiles with strict compiler settings and no warnings.
Project Expectations
You are given requirements and observable behaviors, not step-by-step instructions.
You are expected to research how input works in C and apply that knowledge.
You must implement the program incrementally, keeping it working at every step.
This project is intentionally open in implementation. Different correct solutions are possible.

Rules and Constraints (Read Carefully)
You must not copy code from other students, repositories, or tutorials.
You must not use AI tools to generate or modify code.
Only standard C libraries are allowed. (e.g., stdio.h, stdlib.h, string.h, ctype.h)
Not allowed: math.h or any external libraries
The program must compile using strict compiler flags with zero warnings.
All user input must be read using scanf.
You are expected to read integer menu options and numeric operands.
Arithmetic operations must be implemented using basic operators (+, -, *, /).
Breaking these rules defeats the purpose of the project and will invalidate the learning outcome.

Important Scope Limitation — Input Validation
For the mandatory part of this project, you are only required to validate:

that the menu option is an integer, and
that the integer value is within the valid menu range.
You are not required to handle non-numeric input (for example: x, hello, 1abc). If the user enters non-numeric input, your program may fail (for example, by looping indefinitely or behaving unexpectedly). This is intentional and accepted at this stage.

Handling non-numeric input robustly is addressed in an optional advanced task.

Deliverables
calculator.c

README.md including:

compile command (exact flags)

run instructions

supported operations

numeric behavior (integer vs decimal)

known limitations (if any)

Evaluation Criteria
This project is evaluated primarily on correctness and discipline, not on extra features.

The final automated check is simple and strict:

Your code must compile successfully with the required compiler flags and produce no warnings.
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator
Program behavior and structure will be reviewed manually.

Academic Integrity
You must not copy code from other students or public sources.
You must not use AI tools to generate or modify code.
Violating these rules defeats the purpose of the project.
What This Project Is (and Is Not)
This project is:

A checkpoint of your current programming maturity
An opportunity to practice building a complete program
A controlled environment to struggle with input handling
This project is not:

A speed challenge
A test of how many features you can add
A place to optimize or be clever
Keep the scope small. Focus on correctness, clarity, and control over your program.

Final Note
If you finish this project quickly but cannot explain how your input handling works or why your program survives invalid input, then the project has not done its job.

If you finish it more slowly but understand every part of it, then it has.

Take the time.