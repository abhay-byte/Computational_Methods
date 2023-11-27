#include <stdio.h>
#include <math.h>

// Function for which root is to be found
double function(double x) {
    return x * x - 4; // Change this function as needed
}

// Bisection method function
double bisection(double a, double b, double tol) {
    double c, fa, fb, fc;
    int iteration = 0;

    // Check if the initial values are valid
    if (function(a) * function(b) > 0) {
        printf("Invalid initial values. The function values at a and b must have different signs.\n");
        return -1;
    }

    printf("Iteration\t   a\t\t   b\t\t   c\t\t  f(c)\n");

    do {
        // Bisection formula
        c = (a + b) / 2;
        fa = function(a);
        fb = function(b);
        fc = function(c);

        // Print iteration details
        printf("%8d\t%12lf\t%12lf\t%12lf\t%12lf\n", iteration, a, b, c, fc);

        if (fc == 0.0 || (b - a) / 2 < tol) {
            // Root found or tolerance met
            printf("\nRoot found at x = %lf\n", c);
            return c;
        }

        // Update interval [a, b] based on the sign of f(c)
        if (fc * fa < 0)
            b = c;
        else
            a = c;

        iteration++;
    } while (iteration < 100); // Limit the number of iterations to avoid infinite loop

    printf("\nMaximum number of iterations reached. No convergence.\n");
    return -1;
}

int main() {
    double a, b, tol;

    // Get user input for initial values
    printf("Enter the value of a: ");
    scanf("%lf", &a); //0

    printf("Enter the value of b: ");
    scanf("%lf", &b);//3

    // Get user input for tolerance
    tol = 0.0001;
    // Call bisection method function
    bisection(a, b, tol);
    printf("\nAbhay Raj, 00976803122");
    return 0;
}
