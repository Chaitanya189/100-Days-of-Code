#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student student;      
    struct Student *ptr;       
    
    ptr = &student;
    
    printf("=== POINTER TO STRUCTURE DEMO ===\n");
    printf("Using -> operator to access members\n\n");
    
    printf("Enter Student Details:\n");
    
    while (getchar() != '\n');
    
    printf("Name: ");
    fgets(ptr->name, sizeof(ptr->name), stdin);
    ptr->name[strcspn(ptr->name, "\n")] = 0;
    
    printf("Roll Number: ");
    scanf("%d", &ptr->roll_no);
    
    printf("Marks: ");
    scanf("%f", &ptr->marks);
    
    printf("\n=== STUDENT DETAILS (using ->) ===\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll Number: %d\n", ptr->roll_no);
    printf("Marks: %.2f\n", ptr->marks);
    
    printf("\n=== MODIFYING DATA ===\n");
    
    while (getchar() != '\n');
    
    printf("Enter new name: ");
    fgets(ptr->name, sizeof(ptr->name), stdin);
    ptr->name[strcspn(ptr->name, "\n")] = 0;
    
    printf("Increase marks by: ");
    float increase;
    scanf("%f", &increase);
    ptr->marks += increase;
    
    printf("\n=== MODIFIED STUDENT DETAILS ===\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll Number: %d\n", ptr->roll_no);
    printf("Marks: %.2f\n", ptr->marks);
    
    return 0;
}
