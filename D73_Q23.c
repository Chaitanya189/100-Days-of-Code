#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *f = fopen("text.txt", "r");
    if (f == NULL) {
        printf("File error\n");
        return 1;
    }
    
    int chars = 0, words = 0, lines = 0;
    int in_word = 0;
    char c;
    
    while ((c = fgetc(f)) != EOF) {
        chars++;
        
        if (c == '\n') lines++;
        
        if (isspace(c)) {
            in_word = 0;
        } else if (!in_word) {
            words++;
            in_word = 1;
        }
    }
    
    if (chars > 0) lines++; // Count last line
    
    fclose(f);
    
    printf("Characters: %d\n", chars);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);
    
    return 0;
}
