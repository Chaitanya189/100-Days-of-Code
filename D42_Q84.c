#include <stdio.h>
#include <conio.h>

void main() {
    char str[100];
    int i;
    
    clrscr();
    
    printf("Enter a lowercase string: ");
    gets(str);
    
    printf("\nOriginal string: %s\n", str);
    
    // Convert lowercase to uppercase
    for(i = 0; str[i] != '\0'; i++) {
        // Check if character is lowercase letter
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // Convert to uppercase using ASCII
        }
    }
    
    printf("Uppercase string: %s\n", str);
    
    getch();
}
