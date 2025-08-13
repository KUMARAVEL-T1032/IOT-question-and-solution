#include <stdio.h>

int main() {
    int a, b, result;

    printf("Enter the first integer: ");
    scanf("%d", &a);

    printf("Enter the second integer: ");
    scanf("%d", &b);

    if (b == 0) {
        printf("Error: Modulus by zero is undefined.\n");
    } else {
        result = a % b;
        printf("The modulus of %d %% %d is %d\n", a, b, result);
    }

    return 0;
}
