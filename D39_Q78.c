#include <stdio.h>
#include <conio.h>

void main() {
    int matrix[10][10];
    int size, i, j;
    int sum = 0;
    
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
    
    // Calculate sum of main diagonal
    for(i = 0; i < size; i++) {
        sum += matrix[i][i];
    }
    
    // Display diagonal elements and sum
    printf("\nMain diagonal elements: ");
    for(i = 0; i < size; i++) {
        printf("%d", matrix[i][i]);
        if(i < size - 1) {
            printf(" + ");
        }
    }
    printf(" = %d\n", sum);
    
    printf("\nSum of main diagonal elements: %d\n", sum);
    
    getch();
}
