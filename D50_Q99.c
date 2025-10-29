#include <stdio.h>
#include <conio.h>
#include <string.h>

void main() {
    char date[20], new_date[20];
    char months[12][4] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                         "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int day, month, year;
    
    clrscr();
    
    printf("Enter date in dd/mm/yyyy format: ");
    gets(date);
    
    printf("\nOriginal date: %s\n", date);
    
    // Extract day, month, year using sscanf
    sscanf(date, "%d/%d/%d", &day, &month, &year);
    
    // Validate month
    if(month < 1 || month > 12) {
        printf("Invalid month!\n");
    } else {
        // Create new date format
        sprintf(new_date, "%02d-%s-%d", day, months[month-1], year);
        printf("Converted date: %s\n", new_date);
    }
    
    getch();
}
