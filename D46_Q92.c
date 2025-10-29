#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main() {
    char str[100];
    int count[26] = {0}; // Array to count occurrences of each letter
    int i, found = 0;
    
    clrscr();
    
    printf("Enter a string: ");
    gets(str);
    
    printf("\nString: %s\n", str);
    
    // Find first repeating lowercase alphabet
    for(i = 0; str[i] != '\0'; i++) {
        if(islower(str[i])) {
            int index = str[i] - 'a'; // Convert to index (0-25)
            
            if(count[index] > 0) {
                printf("First repeating lowercase alphabet: '%c'\n", str[i]);
                printf("Found at position: %d\n", i + 1);
                found = 1;
                break;
            }
            
            count[index]++; // Increment count for this letter
        }
    }
    
    if(!found) {
        printf("No repeating lowercase alphabet found.\n");
    }
    
    getch();
}
