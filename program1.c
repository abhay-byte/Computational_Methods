#include <stdio.h>

void printFibonacciSeries(int n) {
    int first = 0, second = 1, next;

    printf("Fibonacci Series up to %d terms: \n", n);

    for (int i = 0; i < n; i++) {
        printf("%d, ", first);
        next = first + second;
        first = second;
        second = next;
    }
}

int main() {
    int range;

    printf("Enter the range of Fibonacci series: ");
    scanf("%d", &range);

    if (range <= 0) {
        printf("Please enter a positive number for the range.\n");
    } else {
        printFibonacciSeries(range);
    }
    printf("\nAbhay Raj, 00976803122");
    return 0;
}
