#include <stdio.h>

#define N 3 // number of equations

void gaussianElimination(float matrix[N][N + 1]);

int main() {
    float matrix[N][N + 1];

    printf("Enter the coefficients of the equations:\n");

    // Reading the coefficients of the equations
    for (int i = 0; i < N; i++) {
        printf("Equation %d: ", i + 1);
        for (int j = 0; j < N + 1; j++) {
            scanf("%f", &matrix[i][j]);
        }
    }

    gaussianElimination(matrix);

    printf("\nThe solution to the system of equations is:\n");
    for (int i = 0; i < N; i++) {
        printf("x%d = %.3f\n", i + 1, matrix[i][N]);
    }

    return 0;
}

void gaussianElimination(float matrix[N][N + 1]) {
    for (int i = 0; i < N - 1; i++) {
        if (matrix[i][i] == 0.0) {
            printf("Error: Division by zero!\n");
            return;
        }
        for (int j = i + 1; j < N; j++) {
            float ratio = matrix[j][i] / matrix[i][i];
            for (int k = 0; k < N + 1; k++) {
                matrix[j][k] -= ratio * matrix[i][k];
            }
        }
    }

    // Back substitution
    for (int i = N - 1; i >= 0; i--) {
        if (matrix[i][i] == 0.0) {
            printf("Error: Division by zero!\n");
            return;
        }
        matrix[i][N] /= matrix[i][i];
        matrix[i][i] = 1.0;
        for (int j = i - 1; j >= 0; j--) {
            matrix[j][N] -= matrix[j][i] * matrix[i][N];
            matrix[j][i] = 0.0;
        }
    }
}
