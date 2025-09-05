#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;  
    int found = 0;         

    printf("Enter a positive integer n (n >= 2): ");
    scanf("%d", &n);

    if (n < 2) {
        printf("No even numbers in the range 1 to %d.\n", n);
        return 1;
    }

    for (i = 2; i <= n; i += 2) {
        product *= i;
        found = 1;
    }

    if (found) {
        printf("The product of even numbers from 1 to %d is: %lld\n", n, product);
    } else {
        printf("No even numbers in the range 1 to %d.\n", n);
    }

    return 0;
}
