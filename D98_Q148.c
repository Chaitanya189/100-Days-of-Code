#include <stdio.h>
#include <string.h>

// Simple Person structure
struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person person1, person2;
    
    printf("=== SIMPLE STRUCTURE COMPARISON ===\n\n");
    
    // Input first person
    printf("Enter details for Person 1:\n");
    printf("Name: ");
    fgets(person1.name, sizeof(person1.name), stdin);
    person1.name[strcspn(person1.name, "\n")] = 0;
    
    printf("Age: ");
    scanf("%d", &person1.age);
    
    // Clear input buffer
    while (getchar() != '\n');
    
    // Input second person
    printf("\nEnter details for Person 2:\n");
    printf("Name: ");
    fgets(person2.name, sizeof(person2.name), stdin);
    person2.name[strcspn(person2.name, "\n")] = 0;
    
    printf("Age: ");
    scanf("%d", &person2.age);
    
    // Display both persons
    printf("\n--- Person 1 ---\n");
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    
    printf("\n--- Person 2 ---\n");
    printf("Name: %s\n", person2.name);
    printf("Age: %d\n", person2.age);
    
    // Compare structures
    printf("\n=== COMPARISON ===\n");
    
    if (strcmp(person1.name, person2.name) == 0 && person1.age == person2.age) {
        printf("✅ Both persons are IDENTICAL!\n");
    } else {
        printf("❌ Persons are DIFFERENT!\n");
        
        if (strcmp(person1.name, person2.name) != 0) {
            printf("- Names are different: '%s' vs '%s'\n", person1.name, person2.name);
        }
        if (person1.age != person2.age) {
            printf("- Ages are different: %d vs %d\n", person1.age, person2.age);
        }
    }
    
    return 0;
}
