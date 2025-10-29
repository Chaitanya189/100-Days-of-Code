#include <stdio.h>
#include <conio.h>

void main() {
    int matrix[10][10], transpose[10][10];
    int size, i, j;
    int symmetric = 1; // 1 means true, 0 means false
    
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
    
    // Calculate transpose
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    
    // Check if matrix is symmetric
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            if(matrix[i][j] != transpose[i][j]) {
                symmetric = 0;
                break;
            }
        }
        if(symmetric == 0) {
            break;
        }
    }
    
    // Display result
    printf("\n");
    if(symmetric == 1) {
        printf("The matrix is SYMMETRIC.\n");
    } else {
        printf("The matrix is NOT SYMMETRIC.\n");
    }
    
    // Display transpose for verification
    printf("\nTranspose matrix:\n");
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
    
    getch();
}
