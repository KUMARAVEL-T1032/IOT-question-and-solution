#include <stdio.h>

int main() {
    float a, b, result;

    printf("Enter the first number: ");
    scanf("%f", &a);

    printf("Enter the second number: ");
    scanf("%f", &b);

    if (b == 0.0f) {
        printf("Error: Division by zero is undefined.\n");
    } else {
        result = a / b;
        printf("The result of %.2f / %.2f is %.2f\n", a, b, result);
    }

    return 0;
}
