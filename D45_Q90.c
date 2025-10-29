#include <stdio.h>
#include <conio.h>

void main() {
    char str[100];
    int i;
    
    clrscr();
    
    printf("Enter a string: ");
    gets(str);
    
    printf("\nOriginal string: %s\n", str);
    
    // Toggle case
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            // Uppercase to lowercase
            str[i] = str[i] + 32;
        } else if(str[i] >= 'a' && str[i] <= 'z') {
            // Lowercase to uppercase
            str[i] = str[i] - 32;
        }
        // Other characters remain unchanged
    }
    
    printf("Toggled case string: %s\n", str);
    
    getch();
}
