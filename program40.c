#include <stdio.h>

int main() {
    int n, tens, units, sum;

    printf("Enter a two-digit number: ");
    scanf("%d", &n);

    tens = n / 10;
    units = n % 10;

    sum = tens + units;

    printf("Sum of digits of %d is %d\n", n, sum);

    return 0;
}
