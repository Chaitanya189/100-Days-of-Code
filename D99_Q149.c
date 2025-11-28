#include <stdio.h>
#include <stdlib.h>  
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student *student;
    
    printf("=== DYNAMIC MEMORY ALLOCATION DEMO ===\n\n");
    
    student = (struct Student*)malloc(sizeof(struct Student));
        if (student == NULL) {
        printf("Error: Memory allocation failed!\n");
        return 1;
    }
    
    printf("✅ Memory allocated successfully!\n");
    printf("Memory size allocated: %zu bytes\n\n", sizeof(struct Student));
    
    printf("Enter Student Details:\n");
    
    while (getchar() != '\n');
    
    printf("Name: ");
    fgets(student->name, sizeof(student->name), stdin);
    student->name[strcspn(student->name, "\n")] = 0;  
    
    printf("Roll Number: ");
    scanf("%d", &student->roll_no);
    
    printf("Marks: ");
    scanf("%f", &student->marks);
    
    printf("\n=== STUDENT DETAILS ===\n");
    printf("Name: %s\n", student->name);
    printf("Roll Number: %d\n", student->roll_no);
    printf("Marks: %.2f\n", student->marks);
    
    free(student);
    printf("\n✅ Memory freed successfully!\n");
    
    return 0;
}
