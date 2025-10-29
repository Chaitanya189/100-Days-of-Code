#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main() {
    char name[100];
    int i;
    
    clrscr();
    
    printf("Enter a name: ");
    gets(name);
    
    printf("\nFull name: %s\n", name);
    printf("Initials: ");
    
    // Print first character of the name
    if(name[0] != ' ') {
        printf("%c", toupper(name[0]));
    }
    
    // Print first character after each space
    for(i = 1; name[i] != '\0'; i++) {
        if(name[i-1] == ' ' && name[i] != ' ') {
            printf(".%c", toupper(name[i]));
        }
    }
    
    printf("\n");
    
    getch();
}
