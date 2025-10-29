#include <stdio.h>
#include <conio.h>

void main() {
    char str[100];
    int length = 0, i;
    
    clrscr();
    
    printf("Enter a string: ");
    gets(str);
    
    // Count characters until null terminator
    for(i = 0; str[i] != '\0'; i++) {
        length++;
    }
    
    printf("\nString: %s\n", str);
    printf("Length of string: %d\n", length);
    
    getch();
}
