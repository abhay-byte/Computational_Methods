#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Check if the user enters a non-positive number
    if (n <= 0) {
        printf("Please enter a positive number.\n");
        return 1; // Exit the program with an error code
    }

    for (i = 1; i <= n; i++) {
        float num;
        printf("Enter number %d: ", i);
        scanf("%f", &num);
        sum += num;
    }

    average = sum / n;

    printf("Sum: %.2f\n", sum);
    printf("Average: %.2f\n", average);
    printf("\nAbhay Raj, 00976803122");
    return 0;
}
