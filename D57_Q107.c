#include <stdio.h>

void previousGreaterElement(int arr[], int n) {
    printf("Element\tPGE\n");
    
    for (int i = 0; i < n; i++) {
        int prevGreater = -1;
        
        // Search for previous greater element to the left
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prevGreater = arr[j];
                break;
            }
        }
        
        printf("%d\t%d\n", arr[i], prevGreater);
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
    
    // Find previous greater elements
    previousGreaterElement(arr, n);
    
    return 0;
}
