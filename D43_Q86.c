#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main() {
    char str[100];
    int i, j, length, palindrome = 1;
    
    clrscr();
    
    printf("Enter a string: ");
    gets(str);
    
    printf("\nString: %s\n", str);
    
    // Find length of string
    for(length = 0; str[length] != '\0'; length++);
    
    // Check palindrome (case-insensitive)
    i = 0;
    j = length - 1;
    
    while(i < j) {
        if(tolower(str[i]) != tolower(str[j])) {
            palindrome = 0;
            break;
        }
        i++;
        j--;
    }
    
    if(palindrome == 1) {
        printf("The string is a PALINDROME.\n");
    } else {
        printf("The string is NOT a palindrome.\n");
    }
    
    getch();
}
