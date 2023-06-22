
# Gaussian Elimination for Linear Systems

This is a C program that solves a system of linear equations using the Gaussian elimination method.

## Overview

The program allows the user to input the coefficients of the equations and computes the solution for the system of equations using the Gaussian elimination algorithm. It provides a simple implementation that can handle a system of equations with three unknowns.

## Getting Started

To run the program, you need a C compiler installed on your machine. You can follow these steps:

1. Clone the repository:

   ```
   $ git clone https://github.com/your-username/gaussian-elimination.git
   ```

2. Navigate to the project directory:

   ```
   $ cd gaussian-elimination
   ```

3. Compile the program:

   ```
   $ gcc gaussian_elimination.c -o gaussian_elimination
   ```

4. Run the executable:

   ```
   $ ./gaussian_elimination
   ```

5. Follow the on-screen prompts to enter the coefficients of the equations.

## Example

Here's an example of the input and output of the program:

```
Enter the coefficients of the equations:
Equation 1: 2 1 -1 8
Equation 2: -3 -1 2 -11
Equation 3: -2 1 2 -3

The solution to the system of equations is:
x1 = 2.00
x2 = 3.00
x3 = -1.00
```

## Limitations

- The program is designed to handle a system of equations with three unknowns (3x3 matrix). If you need to solve a larger system, you'll need to modify the code accordingly.
- It assumes that there are no divisions by zero in the input equations. If a division by zero occurs, an error message will be displayed.

## License

This project is licensed under the [MIT License](LICENSE).
```

