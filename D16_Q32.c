#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;
    int original;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;

    if (num < 0) {
        printf("%d is not a palindrome.\n", original);
        return 0;
    }

    while (num != 0) {
        remainder = num % 10;           
        reversed = reversed * 10 + remainder;  
        num /= 10;                     
    }

    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}
