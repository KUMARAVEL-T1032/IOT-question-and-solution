#include <stdio.h>

int main() {
    int two_digit = 45;   // two-digit number (10-99)
    int one_digit = 7;    // one-digit number (0-9)
    int result = two_digit - one_digit;

    printf("Result of %d - %d is %d\n", two_digit, one_digit, result);
    return 0;
}
