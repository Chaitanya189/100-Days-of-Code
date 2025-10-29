#include <stdio.h>
#include <conio.h>
#include <string.h>

void main() {
    char str1[100], str2[100], temp[200];
    int len1, len2, i, rotation = 0;
    
    clrscr();
    
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    
    printf("\nString 1: %s\n", str1);
    printf("String 2: %s\n", str2);
    
    len1 = strlen(str1);
    len2 = strlen(str2);
    
    // Check if lengths are equal
    if(len1 != len2) {
        rotation = 0;
    } else {
        // Create temp = str1 + str1
        strcpy(temp, str1);
        strcat(temp, str1);
        
        // Check if str2 is substring of temp
        if(strstr(temp, str2) != NULL) {
            rotation = 1;
        } else {
            rotation = 0;
        }
    }
    
    if(rotation == 1) {
        printf("String 2 is a ROTATION of String 1.\n");
    } else {
        printf("String 2 is NOT a rotation of String 1.\n");
    }
    
    getch();
}
