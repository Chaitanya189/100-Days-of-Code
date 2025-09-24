#include <stdio.h>

int main() {
    int n1, n2;

    printf("Enter the size of first array: ");
    scanf("%d", &n1);
    
    printf("Enter the size of second array: ");
    scanf("%d", &n2);

    if (n1 <= 0 || n2 <= 0) {
        printf("Error: Array sizes must be positive.\n");
        return 1;
    }
    
    int arr1[n1], arr2[n2];
    int merged[n1 + n2];
    
    printf("\nEnter %d elements for first array:\n", n1);
    for (int i = 0; i < n1; i++) {
        printf("Array1[%d]: ", i);
        scanf("%d", &arr1[i]);
    }
    printf("\nEnter %d elements for second array:\n", n2);
    for (int i = 0; i < n2; i++) {
        printf("Array2[%d]: ", i);
        scanf("%d", &arr2[i]);
    }
    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    
    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }
   
    printf("\nFirst array: ");
    for (int i = 0; i < n1; i++) {
        printf("%d ", arr1[i]);
    }
    
    printf("\nSecond array: ");
    for (int i = 0; i < n2; i++) {
        printf("%d ", arr2[i]);
    }
    
    printf("\nMerged array: ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    
    return 0;
}
