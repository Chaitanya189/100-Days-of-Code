#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    if (n < 2) {
        printf("There are no prime numbers between 1 and %d\n", n);
        return 0;
    }
    
    printf("Prime numbers between 1 and %d are:\n", n);
    if (n >= 2) {
        printf("2 ");
    }
    for (int i = 3; i <= n; i += 2) {
        int isPrime = 1;  
        for (int j = 3; j * j <= i; j += 2) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        
        if (isPrime) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    
    return 0;
}
