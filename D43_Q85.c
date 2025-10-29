#include <stdio.h>
#include <conio.h>

void main() {
    char str[100], reversed[100];
    int length = 0, i, j;
    
    clrscr();
    
    printf("Enter a string: ");
    gets(str);
    
    // Find length of string
    for(length = 0; str[length] != '\0'; length++);
    
    // Reverse the string
    j = 0;
    for(i = length - 1; i >= 0; i--) {
        reversed[j] = str[i];
        j++;
    }
    reversed[j] = '\0'; // Add null terminator
    
    printf("\nOriginal string: %s\n", str);
    printf("Reversed string: %s\n", reversed);
    
    getch();
}
