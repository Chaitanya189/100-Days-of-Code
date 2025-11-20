#include <stdio.h>

void productExceptSelf(int nums[], int n, int answer[]) {
    // First pass: Calculate left products
    int left[n];
    left[0] = 1;
    for (int i = 1; i < n; i++) {
        left[i] = left[i - 1] * nums[i - 1];
    }
    
    // Second pass: Calculate right products and final answer
    int right = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] = left[i] * right;
        right *= nums[i];
    }
}

int main() {
    int n;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int nums[n];
    int answer[n];
    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    // Calculate product except self
    productExceptSelf(nums, n, answer);
    
    // Display results
    printf("\nInput array:  ");
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    
    printf("\nOutput array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", answer[i]);
    }
    printf("\n");
    
    // Verification
    printf("\nVerification:\n");
    for (int i = 0; i < n; i++) {
        int product = 1;
        printf("answer[%d] = ", i);
        for (int j = 0; j < n; j++) {
            if (j != i) {
                printf("%d", nums[j]);
                if (j < n - 1 && !(j == n - 2 && i == n - 1)) {
                    printf(" × ");
                }
                product *= nums[j];
            }
        }
        printf(" = %d\n", product);
    }
    
    return 0;
}
