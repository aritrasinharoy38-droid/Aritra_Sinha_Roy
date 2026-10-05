// Write a c-program to print a tribonacci series//
#include <stdio.h>

void printTribonacci(int n) {
    if (n <= 0) {
        printf("Please enter a positive number of terms.\n");
        return;
    }

    // Initialize the first three terms
    long long first = 0, second = 0, third = 1;
    long long next;

    printf("Tribonacci Series up to %d terms:\n", n);

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%lld ", first);
        } else if (i == 2) {
            printf("%lld ", second);
        } else if (i == 3) {
            printf("%lld ", third);
        } else {
            // Calculate the next term by summing the previous three
            next = first + second + third;
            printf("%lld ", next);

            // Update variables for the next iteration
            first = second;
            second = third;
            third = next;
        }
    }
    printf("\n");
}

int main() {
    int terms;

    printf("Enter the number of terms: ");
    if (scanf("%d", &terms) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    printTribonacci(terms);

    return 0;
}

