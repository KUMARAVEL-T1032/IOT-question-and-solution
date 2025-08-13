#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    num = abs(num); 

    if (num >= 0 && num <= 9) {
        printf("The number is a single-digit number.\n");
    } else if (num >= 10 && num <= 99) {
        printf("The number is a double-digit number.\n");
    } else {
        printf("The number has more than two digits.\n");
    }

    return 0;
}
