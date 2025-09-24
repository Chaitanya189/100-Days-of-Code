#include <stdio.h>

int main() {
    int n, key, found = 0, position = -1;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error: Array size must be positive.\n");
        return 1;
    }
    
    int arr[n];
 
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
 
    printf("Enter the element to search: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            position = i;
            break;  
        }
    }

    if (found) {
        printf("Element %d found at position %d (index %d).\n", key, position + 1, position);
    } else {
        printf("Element %d not found in the array.\n", key);
    }
    
    return 0;
}
