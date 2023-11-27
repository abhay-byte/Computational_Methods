#include <stdio.h>
#include <math.h>

// Function for which root is to be found
double function(double x) {
    return x * x - 4; // Change this function as needed
}

// Derivative of the function
double derivative(double x) {
    return 2 * x; // Change this derivative as needed
}

// Newton-Raphson method function
double newtonRaphson(double x0, double tol) {
    double x1, f, df;
    int iteration = 0;

    printf("Iteration\t   x0\t\t   f(x0)\t\t  f'(x0)\t\t   x1\n");

    do {
        f = function(x0);
        df = derivative(x0);

        // Check for division by zero
        if (df == 0.0) {
            printf("Derivative is zero. Newton-Raphson method failed.\n");
            return -1;
        }

        x1 = x0 - f / df;

        // Print iteration details
        printf("%8d\t%12lf\t%12lf\t%12lf\t%12lf\n", iteration, x0, f, df, x1);

        if (fabs(f) < tol) {
            // Root found or tolerance met
            printf("\nRoot found at x = %lf\n", x1);
            return x1;
        }

        x0 = x1;
        iteration++;
    } while (iteration < 100); // Limit the number of iterations to avoid infinite loop

    printf("\nMaximum number of iterations reached. No convergence.\n");
    return -1;
}

int main() {
    double x0, tol;

    // Get user input for initial guess
    printf("Enter the initial guess (x0): ");
    scanf("%lf", &x0);//1

    // Get user input for tolerance
    tol = 0.0001;

    // Call Newton-Raphson method function
    newtonRaphson(x0, tol);
    printf("\nAbhay Raj, 00976803122");
    return 0;
}
