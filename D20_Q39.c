#include <stdio.h>

int main() {
    int num, digit, product = 1;
    int hasOddDigits = 0;  

    printf("Enter an integer: ");
    scanf("%d", &num);

    int original = num;

    if (num < 0) {
        num = -num;
    }

    if (num == 0) {
        printf("Number 0 has no odd digits. Product is 0.\n");
        return 0;
    }

    while (num != 0) {
        digit = num % 10;  
      
        if (digit % 2 != 0) {
            product *= digit;
            hasOddDigits = 1; 
        }
        
        num /= 10;
    }

    if (hasOddDigits) {
        printf("Product of odd digits of %d is: %d\n", original, product);
    } else {
        printf("Number %d has no odd digits. Product is 0.\n", original);
    }

    return 0;
}
