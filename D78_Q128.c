#include <stdio.h>
#include <ctype.h>

int isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    FILE *file;
    char filename[100];
    char ch;
    int vowels = 0, consonants = 0;
    
    printf("Enter filename: ");
    scanf("%s", filename);
    
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file '%s'\n", filename);
        return 1;
    }
    
    while ((ch = fgetc(file)) != EOF) {
        if (isalpha(ch)) {
            if (isVowel(ch)) {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    
    fclose(file);
    
    printf("\nResults for '%s':\n", filename);
    printf("Vowels:     %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Total letters: %d\n", vowels + consonants);
    
    return 0;
}
