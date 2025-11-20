#include <stdio.h>

// Function to find ceil of x in sorted array
int findCeil(int arr[], int n, int x) {
    int left = 0;
    int right = n - 1;
    int result = -1;
    
    // Binary search to find ceil
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] >= x) {
            result = mid;  // Potential ceil found
            right = mid - 1;  // Look for smaller index with same condition
        } else {
            left = mid + 1;  // Search in right half
        }
    }
    
    return result;
}

int main() {
    int n, x;
    
    // Input array size
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input sorted array elements
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input x
    printf("Enter x: ");
    scanf("%d", &x);
    
    // Find and display ceil
    int ceilIndex = findCeil(arr, n, x);
    
    printf("\nArray: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nx = %d\n", x);
    
    if (ceilIndex != -1) {
        printf("Ceil of %d is %d at index %d\n", x, arr[ceilIndex], ceilIndex);
    } else {
        printf("Ceil of %d does not exist\n", x);
        printf("Returning: -1\n");
    }
    
    return 0;
}
