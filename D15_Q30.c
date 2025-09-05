#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int original = num;

    if (num < 0) {
        num = -num; 
    }

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;       
        reversed = reversed * 10 + remainder;  
        num /= 10;                  
    }

    if (original < 0) {
        reversed = -reversed;
    }

    printf("Reversed number of %d is: %d\n", original, reversed);

    return 0;
}
