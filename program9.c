#include <stdio.h>

// Function to integrate
double function(double x) {
    return x * x; // Change this function as needed
}

// Simpson's 3/8 rule function
double simpsonsThreeEighthRule(double a, double b, int n) {
    double h = (b - a) / n;
    double result = function(a) + function(b);

    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        if (i % 3 == 0) {
            result += 2 * function(x);
        } else {
            result += 3 * function(x);
        }
    }

    result *= (3 * h) / 8.0;

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

    // Get user input for the number of subintervals (n should be a multiple of 3 for Simpson's 3/8 rule)
    printf("Enter the number of subintervals (n, should be a multiple of 3): ");
    scanf("%d", &n);

    if (n % 3 != 0) {
        printf("Error: The number of subintervals should be a multiple of 3 for Simpson's 3/8 rule.\n");
        return 1;
    }

    // Call Simpson's 3/8 rule function
    double result = simpsonsThreeEighthRule(a, b, n);

    // Print the result
    printf("The result of the integral is: %lf\n", result);
    printf("\nAbhay Raj, 00976803122");
    return 0;
}
