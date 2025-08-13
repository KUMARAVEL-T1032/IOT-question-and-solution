#include <stdio.h>

int main() {
    float a, b, sum;

    printf("Enter first floating-point number: ");
    scanf("%f", &a);

    printf("Enter second floating-point number: ");
    scanf("%f", &b);

    sum = a + b;

    printf("Sum of %.2f and %.2f is %.2f\n", a, b, sum);

    return 0;
}
