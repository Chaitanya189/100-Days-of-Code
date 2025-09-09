#include <stdio.h>

int main() {
    int num, original, remainder, n = 0;
    int result = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;

    int temp = num;
    while (temp != 0) {
        n++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
      
        int power = 1;
        for (int i = 0; i < n; i++) {
            power *= remainder;
        }
        
        result += power;
        temp /= 10;
    }

    if (result == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}
