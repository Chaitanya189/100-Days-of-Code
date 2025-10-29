#include <stdio.h>
#include <conio.h>
#include <string.h>

void main() {
    char sentence[200], result[200];
    int i, start = 0, end = 0, k = 0;
    
    clrscr();
    
    printf("Enter a sentence: ");
    gets(sentence);
    
    printf("\nOriginal sentence: %s\n", sentence);
    
    // Add space at end to process last word
    strcat(sentence, " ");
    
    // Process each word
    for(i = 0; sentence[i] != '\0'; i++) {
        if(sentence[i] == ' ') {
            // End of word reached, reverse it
            end = i - 1;
            
            // Copy word in reverse to result
            for(int j = end; j >= start; j--) {
                result[k] = sentence[j];
                k++;
            }
            
            // Add space
            result[k] = ' ';
            k++;
            
            // Update start for next word
            start = i + 1;
        }
    }
    
    result[k] = '\0'; // Null terminate
    
    printf("Reversed words: %s\n", result);
    
    getch();
}
