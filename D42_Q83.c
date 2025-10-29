#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main() {
    char str[100];
    int vowels = 0, consonants = 0, i;
    
    clrscr();
    
    printf("Enter a string: ");
    gets(str);
    
    printf("\nString: %s\n", str);
    
    // Count vowels and consonants
    for(i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); // Convert to lowercase for easy checking
        
        if(ch >= 'a' && ch <= 'z') {
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
    printf("Total alphabets: %d\n", vowels + consonants);
    
    getch();
}
