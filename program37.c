#include <stdio.h>

int main() {
    int n, firstDigit;

    printf("Enter a two-digit integer: ");
    scanf("%d", &n);

    firstDigit = n / 10;

    printf("The first digit of %d is %d\n", n, firstDigit);

    return 0;
}
