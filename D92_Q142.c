#include <stdio.h>

// Define Student structure
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    // Array of 5 students
    struct Student students[5];
    
    printf("=== Student Management System ===\n");
    printf("Enter details for 5 students:\n\n");
    
    // Read data for 5 students
    for (int i = 0; i < 5; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        
        // Clear input buffer
        while (getchar() != '\n');
        
        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0; // Remove newline
        
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        
        printf("\n");
    }
    
    // Print all student data
    printf("\n=== All Student Records ===\n");
    printf("-------------------------------------------------\n");
    printf("%-5s %-20s %-12s %-8s\n", "S.No", "Name", "Roll No", "Marks");
    printf("-------------------------------------------------\n");
    
    for (int i = 0; i < 5; i++) {
        printf("%-5d %-20s %-12d %-8.2f\n", 
               i + 1, students[i].name, students[i].roll_no, students[i].marks);
    }
    
    return 0;
}
