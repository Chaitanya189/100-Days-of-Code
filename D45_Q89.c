#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main() {
    char str[100], ch;
    int count = 0, i;
    
    clrscr();
    
    printf("Enter a string: ");
    gets(str);
    
    printf("Enter character to count: ");
    ch = getche();
    
    printf("\n\nString: %s\n", str);
    printf("Character to count: '%c'\n", ch);
    
    // Count frequency (case-sensitive)
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            count++;
        }
    }
    
    printf("Frequency of '%c': %d\n", ch, count);
    
    getch();
}
