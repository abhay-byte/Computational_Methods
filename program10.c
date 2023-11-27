#include <stdio.h>

// Function to be interpolated
double function(double x) {
    return x * x; // Change this function as needed
}

// Lagrange's interpolation method function
double lagrangeInterpolation(double x, double x_data[], double y_data[], int n) {
    double result = 0.0;

    for (int i = 0; i < n; i++) {
        double term = y_data[i];
        for (int j = 0; j < n; j++) {
            if (j != i) {
                term = term * (x - x_data[j]) / (x_data[i] - x_data[j]);
            }
        }
        result += term;
    }

    return result;
}

int main() {
    int n;

    // Get user input for the number of data points
    printf("Enter the number of data points: ");
    scanf("%d", &n);

    double x_data[n], y_data[n];

    // Get user input for the data points
    printf("Enter the data points:\n");
    for (int i = 0; i < n; i++) {
        printf("x%d: ", i);
        scanf("%lf", &x_data[i]);
        printf("y%d: ", i);
        scanf("%lf", &y_data[i]);
    }

    // Get user input for the point where interpolation is needed
    double x;
    printf("Enter the value of x for interpolation: ");
    scanf("%lf", &x);

    // Call Lagrange's interpolation method function
    double result = lagrangeInterpolation(x, x_data, y_data, n);

    // Print the result
    printf("Interpolated value at x = %lf: %lf\n", x, result);
    printf("\nAbhay Raj, 00976803122");
    return 0;
}
/*
Enter the number of data points: 3
Enter the data points:
x0: 1
y0: 1
x1: 2
y1: 4
x2: 3
y2: 9
Enter the value of x for interpolation: 2.5*/

