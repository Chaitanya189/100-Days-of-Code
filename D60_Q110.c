#include <stdio.h>

void printMaxInSubarrays(int arr[], int n, int k) {
    printf("Maximum elements in subarrays of size %d: ", k);
    
    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];
        
        // Find maximum in current window
        for (int j = i + 1; j < i + k; j++) {
            if (arr[j] > max) {
                max = arr[j];
            }
        }
        
        printf("%d ", max);
    }
    printf("\n");
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
    
    printf("Enter subarray size k: ");
    scanf("%d", &k);
    
    // Display array
    printf("\nArray: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
    
    // Find and print maximum in each subarray
    printMaxInSubarrays(arr, n, k);
    
    // Display all subarrays and their maximums
    printf("\nAll subarrays of size %d:\n", k);
    for (int i = 0; i <= n - k; i++) {
        printf("Window %d: [", i + 1);
        int max = arr[i];
        
        for (int j = i; j < i + k; j++) {
            printf("%d", arr[j]);
            if (j < i + k - 1) printf(", ");
            if (arr[j] > max) max = arr[j];
        }
        printf("] → Max: %d\n", max);
    }
    
    return 0;
}
