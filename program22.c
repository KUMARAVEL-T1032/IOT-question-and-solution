#include <stdio.h>

int main() {
    int a, b, result;

    printf("Enter first integer: ");
    scanf("%d", &a);

    printf("Enter second integer: ");
    scanf("%d", &b);

    result = a - b;

    printf("Result of %d - %d is %d\n", a, b, result);

    return 0;
}
