#include <stdio.h>

int main() {
    int a, b, c, sum;

    printf("Enter first integer: ");
    scanf("%d", &a);

    printf("Enter second integer: ");
    scanf("%d", &b);

    printf("Enter third integer: ");
    scanf("%d", &c);

    sum = a + b + c;

    printf("Sum of %d, %d, and %d is %d\n", a, b, c, sum);

    return 0;
}
