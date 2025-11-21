#include <stdio.h>

#define NUM_STUDENTS 5

// Define Student structure
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[NUM_STUDENTS];
    
    printf("=== Student Management System ===\n");
    printf("Enter details for %d students:\n\n", NUM_STUDENTS);
    
    // Input data for all students
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("--- Student %d ---\n", i + 1);
        
        // Clear input buffer
        while (getchar() != '\n');
        
        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0;
        
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        
        printf("\n");
    }
    
    // Find student with highest marks
    int topperIndex = 0;
    float highestMarks = students[0].marks;
    
    for (int i = 1; i < NUM_STUDENTS; i++) {
        if (students[i].marks > highestMarks) {
            highestMarks = students[i].marks;
            topperIndex = i;
        }
    }
    
    // Print the topper
    printf("\n🎉 STUDENT WITH HIGHEST MARKS 🎉\n");
    printf("=================================\n");
    printf("Name: %s\n", students[topperIndex].name);
    printf("Roll Number: %d\n", students[topperIndex].roll_no);
    printf("Marks: %.2f\n", students[topperIndex].marks);
    printf("=================================\n");
    
    return 0;
}
