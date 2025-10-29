#include <stdio.h>
#include <conio.h>

void main() {
    int matrix[10][10];
    int rows, cols, i, j, k;
    
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
    
    // Display original matrix
    printf("\nOriginal matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    
    // Diagonal traversal (top-left to bottom-right)
    printf("\nDiagonal traversal (main diagonals):\n");
    
    // Print diagonals starting from first row
    for(k = 0; k < rows; k++) {
        i = k;
        j = 0;
        printf("Diagonal %d: ", k + 1);
        while(i < rows && j < cols) {
            printf("%d ", matrix[i][j]);
            i++;
            j++;
        }
        printf("\n");
    }
    
    // Print diagonals starting from first column (excluding first element)
    for(k = 1; k < cols; k++) {
        i = 0;
        j = k;
        printf("Diagonal %d: ", rows + k);
        while(i < rows && j < cols) {
            printf("%d ", matrix[i][j]);
            i++;
            j++;
        }
        printf("\n");
    }
    
    getch();
}
