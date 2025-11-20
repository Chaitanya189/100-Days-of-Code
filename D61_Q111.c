#include <stdio.h>

void firstNegativeInSubarrays(int arr[], int n, int k) {
    printf("First negative in subarrays of size %d: ", k);
    
    for (int i = 0; i <= n - k; i++) {
        int found = 0;
        
        // Find first negative in current window
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d ", arr[j]);
                found = 1;
                break;
            }
        }
        
        // If no negative found, print 0
        if (!found) {
            printf("0 ");
        }
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
    
    // Find and print first negative in each subarray
    firstNegativeInSubarrays(arr, n, k);
    
    // Display all subarrays and their first negatives
    printf("\nAll subarrays of size %d:\n", k);
    for (int i = 0; i <= n - k; i++) {
        printf("Window %d: [", i + 1);
        int firstNeg = 0;
        int found = 0;
        
        for (int j = i; j < i + k; j++) {
            printf("%d", arr[j]);
            if (j < i + k - 1) printf(", ");
            
            // Find first negative
            if (!found && arr[j] < 0) {
                firstNeg = arr[j];
                found = 1;
            }
        }
        
        if (found) {
            printf("] → First negative: %d\n", firstNeg);
        } else {
            printf("] → First negative: 0\n");
        }
    }
    
    return 0;
}
