#include <stdio.h>

// Function to integrate
double function(double x) {
    return x * x; // Change this function as needed
}

// Simpson's 1/3 rule function
double simpsonsRule(double a, double b, int n) {
    double h = (b - a) / n;
    double result = function(a) + function(b);

    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        if (i % 2 == 0) {
            result += 2 * function(x);
        } else {
            result += 4 * function(x);
        }
    }

    result *= h / 3.0;

    return result;
}

int main() {
    double a, b;
    int n;

    // Get user input for interval [a, b]
    printf("Enter the lower limit a: ");
    scanf("%lf", &a);

    printf("Enter the upper limit b: ");
    scanf("%lf", &b);

    // Get user input for the number of subintervals (n should be even for Simpson's rule)
    printf("Enter the number of subintervals (n, should be even): ");
    scanf("%d", &n);

    if (n % 2 != 0) {
        printf("Error: The number of subintervals should be even for Simpson's rule.\n");
        return 1;
    }

    // Call Simpson's 1/3 rule function
    double result = simpsonsRule(a, b, n);

    // Print the result
    printf("The result of the integral is: %lf\n", result);
    printf("\nAbhay Raj, 00976803122");
    return 0;
}
