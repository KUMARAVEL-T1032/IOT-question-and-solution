#include <stdio.h>

int main() {
    float num1, num2, result;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    if (num1 > num2) {
        result = num1 - num2;
        printf("Result of %.2f - %.2f is %.2f\n", num1, num2, result);
    } else {
        result = num2 - num1;
        printf("Result of %.2f - %.2f is %.2f\n", num2, num1, result);
    }

    return 0;
}
