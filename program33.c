#include <stdio.h>

int main() {
    int a, b, quotient, remainder;

    printf("Enter the first integer: ");
    scanf("%d", &a);

    printf("Enter the second integer: ");
    scanf("%d", &b);

    if (b == 0) {
        printf("Error: Division by zero is undefined.\n");
    } else {
        quotient = a / b;
        remainder = a % b;
        printf("Quotient: %d\n", quotient);
        printf("Remainder: %d\n", remainder);
    }

    return 0;
}
