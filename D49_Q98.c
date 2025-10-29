#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

void main() {
    char name[100], surname[50];
    int i, last_space = 0;
    
    clrscr();
    
    printf("Enter a name: ");
    gets(name);
    
    printf("\nFull name: %s\n", name);
    
    // Find last space position to extract surname
    for(i = 0; name[i] != '\0'; i++) {
        if(name[i] == ' ') {
            last_space = i;
        }
    }
    
    // Extract surname
    strcpy(surname, &name[last_space + 1]);
    
    printf("Formatted name: ");
    
    // Print initials for first and middle names
    if(name[0] != ' ') {
        printf("%c.", toupper(name[0]));
    }
    
    for(i = 1; i < last_space; i++) {
        if(name[i-1] == ' ' && name[i] != ' ') {
            printf("%c.", toupper(name[i]));
        }
    }
    
    // Print full surname
    printf("%s\n", surname);
    
    getch();
}
