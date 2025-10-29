#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main() {
    char str[100], result[100];
    int i, j = 0;
    
    clrscr();
    
    printf("Enter a string: ");
    gets(str);
    
    printf("\nOriginal string: %s\n", str);
    
    // Remove vowels (case-insensitive)
    for(i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        
        // Check if character is NOT a vowel
        if(!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
            result[j] = str[i]; // Keep original case
            j++;
        }
    }
    result[j] = '\0'; // Add null terminator
    
    printf("String without vowels: %s\n", result);
    
    getch();
}
