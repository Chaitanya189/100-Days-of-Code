#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Error: Array size must be positive.\n");
        return 1;
    }
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("\nSum of array elements = %d\n", sum);
    
    return 0;
}
