#include <stdio.h>
#include <math.h>

int findPivotInteger(int n) {
    // Using mathematical formula
    // Sum(1 to x) = x*(x+1)/2
    // Sum(x to n) = (n*(n+1) - x*(x-1))/2
    // Equation: x*(x+1)/2 = (n*(n+1) - x*(x-1))/2
    // Simplifies to: x² + x = n² + n - x² + x
    // Further simplifies to: 2x² = n² + n
    // Therefore: x = sqrt((n² + n)/2)
    
    int total = n * (n + 1) / 2;
    int x = sqrt(total);
    
    // Verify if x satisfies the condition
    if (x * x == total) {
        return x;
    } else {
        return -1;
    }
}

int main() {
    int n;
    
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    
    int pivot = findPivotInteger(n);
    
    printf("\nFor n = %d:\n", n);
    printf("Total sum from 1 to %d: %d\n", n, n * (n + 1) / 2);
    
    if (pivot != -1) {
        int leftSum = pivot * (pivot + 1) / 2;
        int rightSum = n * (n + 1) / 2 - pivot * (pivot - 1) / 2;
        
        printf("Pivot integer: %d\n", pivot);
        printf("Sum from 1 to %d: %d\n", pivot, leftSum);
        printf("Sum from %d to %d: %d\n", pivot, n, rightSum);
        printf("Verification: %d = %d\n", leftSum, rightSum);
    } else {
        printf("No pivot integer found: -1\n");
    }
    
    return 0;
}
