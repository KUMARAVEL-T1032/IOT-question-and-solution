#include <stdio.h>

int main() {
    int a, b, c, result;

    
    printf("Enter the first integer: ");
    scanf("%d", &a);

    printf("Enter the second integer: ");
    scanf("%d", &b);

    printf("Enter the third integer: ");
    scanf("%d", &c);

    
    result = a * b * c;


    printf("The result of %d * %d * %d is %d\n", a, b, c, result);

    return 0;
}
