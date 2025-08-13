#include <stdio.h>

int main() {
    int number, result;

    
    printf("Enter a number: ");
    scanf("%d", &number);

    
    result = number * 10;

    printf("%d multiplied by 10 is %d\n", number, result);

    return 0;
}
