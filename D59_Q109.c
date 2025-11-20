#include <stdio.h>

int maxSumSubarray(int arr[], int n, int k) {
    // Check if k is valid
    if (k > n || k <= 0) {
        return -1;
    }
    
    // Calculate sum of first window
    int maxSum = 0;
    for (int i = 0; i < k; i++) {
        maxSum += arr[i];
    }
    
    // Use sliding window to find maximum sum
    int windowSum = maxSum;
    for (int i = k; i < n; i++) {
        // Slide the window: remove leftmost element, add rightmost element
        windowSum = windowSum + arr[i] - arr[i - k];
        
        // Update maxSum if current window sum is greater
        if (windowSum > maxSum) {
            maxSum = windowSum;
        }
    }
    
    return maxSum;
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
    printf("\n");
    
    // Find maximum sum
    int result = maxSumSubarray(arr, n, k);
    
    if (result == -1) {
        printf("Invalid value of k!\n");
    } else {
        printf("Maximum sum of subarrays of size %d: %d\n", k, result);
        
        // Display all subarrays of size k and their sums
        printf("\nAll subarrays of size %d and their sums:\n", k);
        for (int i = 0; i <= n - k; i++) {
            int sum = 0;
            printf("[");
            for (int j = i; j < i + k; j++) {
                printf("%d", arr[j]);
                if (j < i + k - 1) printf(", ");
                sum += arr[j];
            }
            printf("] = %d", sum);
            if (sum == result) printf(" ← MAXIMUM");
            printf("\n");
        }
    }
    
    return 0;
}
