#include <stdio.h>

int main() {
    int n, lastDigit;

    printf("Enter an integer: ");
    scanf("%d", &n);

    lastDigit = n % 10;

    printf("The last digit of %d is %d\n", n, lastDigit);

    return 0;
}
