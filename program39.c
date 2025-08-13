#include <stdio.h>

int main() {
    int n, tens, units;

    printf("Enter an integer: ");
    scanf("%d", &n);

    units = n % 10;
    tens = (n / 10) % 10;

    printf("Tens digit: %d\n", tens);
    printf("Units digit: %d\n", units);

    return 0;
}
