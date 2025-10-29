#include <stdio.h>
#include <conio.h>

void main() {
    char str[100];
    int i;
    
    clrscr();
    
    printf("Enter a string: ");
    gets(str);
    
    printf("\nString: %s\n", str);
    printf("Characters printed one per line:\n");
    
    // Print each character on new line
    for(i = 0; str[i] != '\0'; i++) {
        printf("Character %d: '%c'\n", i + 1, str[i]);
    }
    
    getch();
}
