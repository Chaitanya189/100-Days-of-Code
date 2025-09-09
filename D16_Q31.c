#include <stdio.h>

int main() {
    int num, remainder;
    long long binary = 0;
    int place = 1;  

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    int original = num;

    if (num == 0) {
        printf("Binary equivalent of 0 is: 0\n");
        return 0;
    }

    while (num > 0) {
        remainder = num % 2;        
        binary += remainder * place; 
        place *= 10;                
        num /= 2;                   
    }

    printf("Binary equivalent of %d is: %lld\n", original, binary);

    return 0;
}
