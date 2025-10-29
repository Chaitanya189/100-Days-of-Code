#include <stdio.h>
#include <conio.h>

void main() {
    int mat1[10][10], mat2[10][10], result[10][10];
    int r1, c1, r2, c2, i, j, k;
    int sum;
    
    clrscr();
    
    // Input dimensions of first matrix
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);
    
    // Input dimensions of second matrix
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);
    
    // Check if multiplication is possible
    if(c1 != r2) {
        printf("\nError: Matrix multiplication not possible!\n");
        printf("Columns of first matrix must equal rows of second matrix.\n");
        getch();
        return;
    }
    
    // Reading first matrix
    printf("\nEnter elements of first matrix:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    
    // Reading second matrix
    printf("\nEnter elements of second matrix:\n");
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }
    
    // Display first matrix
    printf("\nFirst matrix (%d x %d):\n", r1, c1);
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            printf("%d\t", mat1[i][j]);
        }
        printf("\n");
    }
    
    // Display second matrix
    printf("\nSecond matrix (%d x %d):\n", r2, c2);
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            printf("%d\t", mat2[i][j]);
        }
        printf("\n");
    }
    
    // Initialize result matrix to zero
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }
    
    // Matrix multiplication
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            sum = 0;
            for(k = 0; k < c1; k++) {
                sum += mat1[i][k] * mat2[k][j];
            }
            result[i][j] = sum;
        }
    }
    
    // Display result matrix
    printf("\nResult of multiplication (%d x %d):\n", r1, c2);
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    
    getch();
}
