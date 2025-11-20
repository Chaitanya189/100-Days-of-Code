#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int findKthSmallest(int arr[], int n, int k) {
    // Sort the array
    qsort(arr, n, sizeof(int), compare);
    
    // Return kth smallest element (1-based index)
    return arr[k - 1];
}

int main() {
    int n, k;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter k: ");
    scanf("%d", &k);
    
    // Validate k
    if (k < 1 || k > n) {
        printf("Error: k must be between 1 and %d\n", n);
        return 1;
    }
    
    // Display original array
    printf("\nOriginal array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Find kth smallest element
    int kth_smallest = findKthSmallest(arr, n, k);
    
    // Display sorted array
    printf("Sorted array:   ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    printf("%dth smallest element: %d\n", k, kth_smallest);
    
    // Display positions
    printf("\nElement positions after sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%d", i + 1);
        if (i + 1 == 1) printf("st");
        else if (i + 1 == 2) printf("nd");
        else if (i + 1 == 3) printf("rd");
        else printf("th");
        printf(" smallest: %d", arr[i]);
        if (i + 1 == k) printf(" ← RESULT");
        printf("\n");
    }
    
    return 0;
}
