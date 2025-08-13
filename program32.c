#include <stdio.h>

int main() {
    int a, b;
    float result;

    printf("Enter the first integer: ");
    scanf("%d", &a);

    printf("Enter the second integer: ");
    scanf("%d", &b);

    if (b == 0) {
        printf("Error: Division by zero is undefined.\n");
    } else {
        result = (float)a / b;
        printf("The result of %d / %d is %.2f\n", a, b, result);
    }

    return 0;
}
