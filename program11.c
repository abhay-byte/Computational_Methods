#include <stdio.h>

// Function representing the differential equation dy/dx = f(x, y)
double f(double x, double y) {
    return x + y; // Change this function as needed
}

// Fourth-order Runge-Kutta method
void rungeKutta(double x0, double y0, double h, double x_target) {
    double x = x0;
    double y = y0;

    printf("Step\t   x\t\t   y\n");
    printf("----------------------------\n");

    while (x < x_target) {
        printf("%4d\t%12lf\t%12lf\n", (int)(x / h), x, y);

        double k1 = h * f(x, y);
        double k2 = h * f(x + h / 2, y + k1 / 2);
        double k3 = h * f(x + h / 2, y + k2 / 2);
        double k4 = h * f(x + h, y + k3);

        y = y + (k1 + 2 * k2 + 2 * k3 + k4) / 6;
        x = x + h;
    }

    // Print the final values
    printf("%4d\t%12lf\t%12lf\n", (int)(x / h), x, y);
}

int main() {
    double x0, y0, h, x_target;

    // Get user input for initial values, step size, and target x value
    printf("Enter the initial value x0: ");
    scanf("%lf", &x0);

    printf("Enter the initial value y0: ");
    scanf("%lf", &y0);

    printf("Enter the step size h: ");
    scanf("%lf", &h);

    printf("Enter the target value of x: ");
    scanf("%lf", &x_target);

    // Call Runge-Kutta method function
    rungeKutta(x0, y0, h, x_target);
    printf("\nAbhay Raj, 00976803122");
    return 0;
}
