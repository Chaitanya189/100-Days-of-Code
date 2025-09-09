#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int original = num;

    if (num < 0) {
        num = -num;
    }

    while (num != 0) {
        remainder = num % 10;   
        sum += remainder;      
        num /= 10;             
    }

    printf("Sum of digits of %d is: %d\n", original, sum);

    return 0;
}
