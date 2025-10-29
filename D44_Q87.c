#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main() {
    char str[100];
    int spaces = 0, digits = 0, special = 0, alphabets = 0, i;
    
    clrscr();
    
    printf("Enter a string: ");
    gets(str);
    
    printf("\nString: %s\n", str);
    
    // Count different character types
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ') {
            spaces++;
        } else if(isdigit(str[i])) {
            digits++;
        } else if(isalpha(str[i])) {
            alphabets++;
        } else {
            special++;
        }
    }
    
    printf("Analysis:\n");
    printf("Alphabets: %d\n", alphabets);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);
    printf("Special characters: %d\n", special);
    printf("Total characters: %d\n", alphabets + digits + spaces + special);
    
    getch();
}
