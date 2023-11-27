#include <stdio.h>
#include <math.h>

// Function for which root is to be found
double function(double x) {
    return x * x - 4; // Change this function as needed
}

// Secant method function
void secantMethod(double x0, double x1, double tol) {
    double x2, f0, f1, f2;
    int iteration = 0;

    printf("Iteration\t   x0\t\t   x1\t\t   x2\t\t  f(x2)\n");

    do {
        f0 = function(x0);
        f1 = function(x1);

        // Check for division by zero
        if (f1 - f0 == 0.0) {
            printf("Division by zero. Secant method failed.\n");
            return;
        }

        x2 = x1 - f1 * (x1 - x0) / (f1 - f0);
        f2 = function(x2);

        // Print iteration details
        printf("%8d\t%12lf\t%12lf\t%12lf\t%12lf\n", iteration, x0, x1, x2, f2);

        if (fabs(f2) < tol) {
            // Root found or tolerance met
            printf("\nRoot found at x = %lf\n", x2);
            printf("Number of iterations: %d\n", iteration);
            return;
        }

        x0 = x1;
        x1 = x2;
        iteration++;
    } while (iteration < 100); // Limit the number of iterations to avoid infinite loop

    printf("\nMaximum number of iterations reached. No convergence.\n");
}

int main() {
    double x0, x1, tol;

    // Get user input for initial guesses
    printf("Enter the initial guess x0: ");
    scanf("%lf", &x0);//1

    printf("Enter another initial guess x1: ");
    scanf("%lf", &x1);//3

    // Get user input for tolerance
    tol = 0.0001;

    // Call secant method function
    secantMethod(x0, x1, tol);
    printf("\nAbhay Raj, 00976803122");
    return 0;
}
