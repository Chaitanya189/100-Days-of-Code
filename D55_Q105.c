#include <stdio.h>

int findMajorityElement(int nums[], int n) {
    // Boyer-Moore Majority Vote Algorithm
    int candidate = -1;
    int count = 0;
    
    // First pass: Find potential candidate
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }
    
    // Second pass: Verify if candidate is majority
    count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            count++;
        }
    }
    
    if (count > n / 2) {
        return candidate;
    } else {
        return -1;
    }
}

int main() {
    int n;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int nums[n];
    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    // Display array
    printf("\nArray: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    printf("n = %d, ⌊n/2⌋ = %d\n", n, n / 2);
    
    // Find majority element
    int majority = findMajorityElement(nums, n);
    
    if (majority != -1) {
        // Count occurrences for verification
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == majority) {
                count++;
            }
        }
        printf("Majority element: %d\n", majority);
        printf("Occurrences: %d (more than %d)\n", count, n / 2);
    } else {
        printf("No majority element found: -1\n");
    }
    
    return 0;
}
