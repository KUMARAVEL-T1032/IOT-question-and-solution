#include <stdio.h>

int main() {
    int n, tensDigit;

    printf("Enter an integer: ");
    scanf("%d", &n);

    tensDigit = (n / 10) % 10;

    printf("The tens digit of %d is %d\n", n, tensDigit);

    return 0;
}
