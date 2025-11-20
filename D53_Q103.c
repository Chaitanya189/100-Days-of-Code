#include <stdio.h>

int findPivotIndex(int arr[], int n) {
    int totalSum = 0;
    
    // Calculate total sum of array
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }
    
    int leftSum = 0;
    
    // Find pivot index
    for (int i = 0; i < n; i++) {
        // rightSum = totalSum - leftSum - arr[i]
        int rightSum = totalSum - leftSum - arr[i];
        
        if (leftSum == rightSum) {
            return i;  // Found pivot index
        }
        
        leftSum += arr[i];
    }
    
    return -1;  // No pivot index found
}

int main() {
    int n;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Display array
    printf("\nArray: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Find pivot index
    int pivotIndex = findPivotIndex(arr, n);
    
    if (pivotIndex != -1) {
        printf("Pivot index: %d\n", pivotIndex);
        
        // Calculate and display sums for verification
        int leftSum = 0, rightSum = 0;
        for (int i = 0; i < pivotIndex; i++) {
            leftSum += arr[i];
        }
        for (int i = pivotIndex + 1; i < n; i++) {
            rightSum += arr[i];
        }
        
        printf("Left sum (0 to %d): %d\n", pivotIndex - 1, leftSum);
        printf("Right sum (%d to %d): %d\n", pivotIndex + 1, n - 1, rightSum);
        printf("Element at pivot index %d: %d\n", pivotIndex, arr[pivotIndex]);
    } else {
        printf("No pivot index found: -1\n");
    }
    
    return 0;
}
