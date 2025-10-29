#include <stdio.h>
#include <conio.h>
#include <string.h>

void main() {
    char str[50];
    int i, j, k, len;
    
    clrscr();
    
    printf("Enter a string: ");
    gets(str);
    
    printf("\nString: %s\n", str);
    printf("All sub-strings:\n");
    
    len = strlen(str);
    
    // Generate all substrings
    for(i = 0; i < len; i++) {
        for(j = i; j < len; j++) {
            // Print substring from i to j
            for(k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }
    
    printf("Total sub-strings: %d\n", len * (len + 1) / 2);
    
    getch();
}
