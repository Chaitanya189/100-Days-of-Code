#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

void main() {
    char str1[100], str2[100];
    int count1[26] = {0}, count2[26] = {0};
    int i, anagram = 1;
    
    clrscr();
    
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    
    printf("\nString 1: %s\n", str1);
    printf("String 2: %s\n", str2);
    
    // Count frequency of alphabets in first string (case-insensitive)
    for(i = 0; str1[i] != '\0'; i++) {
        if(isalpha(str1[i])) {
            char ch = tolower(str1[i]);
            count1[ch - 'a']++;
        }
    }
    
    // Count frequency of alphabets in second string (case-insensitive)
    for(i = 0; str2[i] != '\0'; i++) {
        if(isalpha(str2[i])) {
            char ch = tolower(str2[i]);
            count2[ch - 'a']++;
        }
    }
    
    // Compare frequency arrays
    for(i = 0; i < 26; i++) {
        if(count1[i] != count2[i]) {
            anagram = 0;
            break;
        }
    }
    
    if(anagram == 1) {
        printf("The strings are ANAGRAMS.\n");
    } else {
        printf("The strings are NOT anagrams.\n");
    }
    
    getch();
}
