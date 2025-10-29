#include <stdio.h>
#include <conio.h>

void main() {
    char str[100];
    int i;
    
    clrscr();
    
    printf("Enter a string: ");
    gets(str);
    
    printf("\nOriginal string: %s\n", str);
    
    // Replace spaces with hyphens
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ') {
            str[i] = '-';
        }
    }
    
    printf("Modified string: %s\n", str);
    
    getch();
}
