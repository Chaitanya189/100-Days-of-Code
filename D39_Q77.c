#include <stdio.h>
#include <conio.h>

void main() {
    int matrix[10][10];
    int size, i, j, k;
    int distinct = 1; // 1 means true (all distinct), 0 means false
    
    clrscr();
    
    printf("Enter size of square matrix (max 10): ");
    scanf("%d", &size);
    
    // Reading matrix elements
    printf("\nEnter matrix elements:\n");
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Display matrix
    printf("\nThe matrix is:\n");
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    
    // Check if diagonal elements are distinct
    for(i = 0; i < size; i++) {
        for(j = i + 1; j < size; j++) {
            if(matrix[i][i] == matrix[j][j]) {
                distinct = 0;
                break;
            }
        }
        if(distinct == 0) {
            break;
        }
    }
    
    // Display diagonal elements
    printf("\nDiagonal elements: ");
    for(i = 0; i < size; i++) {
        printf("%d ", matrix[i][i]);
    }
    
    // Display result
    printf("\n\n");
    if(distinct == 1) {
        printf("All diagonal elements are DISTINCT.\n");
    } else {
        printf("Diagonal elements are NOT DISTINCT.\n");
        printf("(Some diagonal elements are repeated)\n");
    }
    
    getch();
}
