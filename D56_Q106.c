#include <stdio.h>

void nextGreaterElement(int arr[], int n) {
    printf("Element\tNGE\n");
    
    for (int i = 0; i < n; i++) {
        int nextGreater = -1;
        
        // Search for next greater element to the right
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nextGreater = arr[j];
                break;
            }
        }
        
        printf("%d\t%d\n", arr[i], nextGreater);
    }
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
    printf("\n\n");
    
    // Find next greater elements
    nextGreaterElement(arr, n);
    
    return 0;
}
