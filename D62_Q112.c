#include <stdio.h>
#include <limits.h>

int kadaneAlgorithm(int arr[], int n) {
    int max_so_far = INT_MIN;
    int max_ending_here = 0;
    int all_negative = 1;
    int max_element = INT_MIN;
    
    for (int i = 0; i < n; i++) {
        // Check if all elements are negative
        if (arr[i] >= 0) {
            all_negative = 0;
        }
        
        // Track maximum element (useful when all are negative)
        if (arr[i] > max_element) {
            max_element = arr[i];
        }
        
        // Kadane's algorithm
        max_ending_here = max_ending_here + arr[i];
        
        if (max_ending_here < 0) {
            max_ending_here = 0;
        }
        
        if (max_so_far < max_ending_here) {
            max_so_far = max_ending_here;
        }
    }
    
    // If all elements are negative, return the maximum element
    if (all_negative) {
        return max_element;
    }
    
    return max_so_far;
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
    
    // Find maximum subarray sum using Kadane's algorithm
    int max_sum = kadaneAlgorithm(arr, n);
    
    printf("Maximum sum of contiguous subarray: %d\n", max_sum);
    
    // Display all possible subarrays and their sums for verification
    printf("\nAll contiguous subarrays and their sums:\n");
    int max_subarray_start = -1, max_subarray_end = -1;
    int current_max = INT_MIN;
    
    for (int i = 0; i < n; i++) {
        int current_sum = 0;
        for (int j = i; j < n; j++) {
            current_sum += arr[j];
            printf("[");
            for (int k = i; k <= j; k++) {
                printf("%d", arr[k]);
                if (k < j) printf(", ");
            }
            printf("] = %d", current_sum);
            
            if (current_sum == max_sum) {
                printf(" ← MAXIMUM");
                if (max_subarray_start == -1) {
                    max_subarray_start = i;
                    max_subarray_end = j;
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    
    if (max_subarray_start != -1) {
        printf("Maximum subarray: [");
        for (int i = max_subarray_start; i <= max_subarray_end; i++) {
            printf("%d", arr[i]);
            if (i < max_subarray_end) printf(", ");
        }
        printf("]\n");
    }
    
    return 0;
}
