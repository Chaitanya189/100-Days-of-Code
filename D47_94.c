#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main() {
    char sentence[200], longest[50], current[50];
    int i, j = 0, max_len = 0, current_len = 0;
    
    clrscr();
    
    printf("Enter a sentence: ");
    gets(sentence);
    
    printf("\nSentence: %s\n", sentence);
    
    // Process each character
    for(i = 0; sentence[i] != '\0'; i++) {
        if(isalpha(sentence[i])) {
            // Build current word
            current[j] = sentence[i];
            j++;
            current_len++;
        } else {
            // End of word reached
            if(current_len > max_len) {
                max_len = current_len;
                current[j] = '\0'; // Null terminate
                strcpy(longest, current);
            }
            // Reset for next word
            j = 0;
            current_len = 0;
        }
    }
    
    // Check last word
    if(current_len > max_len) {
        current[j] = '\0';
        strcpy(longest, current);
        max_len = current_len;
    }
    
    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", max_len);
    
    getch();
}
