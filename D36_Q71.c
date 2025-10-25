#include <stdio.h>
#include <conio.h>

void main() {
    int matrix[10][10];
    int rows, cols, i, j;
    
    clrscr();
    
    printf("Enter number of rows (max 10): ");
    scanf("%d", &rows);
    printf("Enter number of columns (max 10): ");
    scanf("%d", &cols);
    
    // Reading matrix elements
    printf("\nEnter matrix elements:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Printing matrix
    printf("\nThe matrix is:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    
    getch();
}
