#include <stdio.h>

// Function to integrate
double function(double x) {
    return x * x; // Change this function as needed
}

// Trapezoidal rule function
double trapezoidalRule(double a, double b, int n) {
    double h = (b - a) / n;
    double result = 0.5 * (function(a) + function(b));

    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        result += function(x);
    }

    result *= h;

    return result;
}

int main() {
    double a, b;
    int n;

    // Get user input for interval [a, b]
    printf("Enter the lower limit a: ");
    scanf("%lf", &a);//1

    printf("Enter the upper limit b: ");
    scanf("%lf", &b);//3

    // Get user input for the number of subintervals
    printf("Enter the number of subintervals (n): ");
    scanf("%d", &n);//4

    // Call trapezoidal rule function
    double result = trapezoidalRule(a, b, n);

    // Print the result
    printf("The result of the integral is: %lf\n", result);
    printf("\nAbhay Raj, 00976803122");
    return 0;
}
