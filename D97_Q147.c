#include <stdio.h>
#include <string.h>

// Simple Employee structure
struct Employee {
    int id;
    char name[50];
    float salary;
};

// Function to add one employee to file
void addEmployee() {
    struct Employee emp;
    
    printf("\n--- Add Employee ---\n");
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    
    // Clear the input buffer
    while (getchar() != '\n');
    
    printf("Enter Name: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    // Remove the newline character from name
    emp.name[strcspn(emp.name, "\n")] = 0;
    
    printf("Enter Salary: ");
    scanf("%f", &emp.salary);
    
    // Open file in append binary mode
    FILE *file = fopen("employees.dat", "ab");
    if (file == NULL) {
        printf("Error: Cannot create file!\n");
        return;
    }
    
    // Write employee data to binary file
    fwrite(&emp, sizeof(struct Employee), 1, file);
    
    fclose(file);
    printf("Employee added successfully!\n");
}

// Function to display all employees from file
void displayEmployees() {
    struct Employee emp;
    
    printf("\n--- All Employees ---\n");
    
    // Open file in read binary mode
    FILE *file = fopen("employees.dat", "rb");
    if (file == NULL) {
        printf("No employees found. File is empty.\n");
        return;
    }
    
    // Read and display each employee
    printf("ID\tName\t\tSalary\n");
    printf("--------------------------------\n");
    
    while (fread(&emp, sizeof(struct Employee), 1, file)) {
        printf("%d\t%s\t\t$%.2f\n", emp.id, emp.name, emp.salary);
    }
    
    fclose(file);
}

// Function to count total employees
void countEmployees() {
    FILE *file = fopen("employees.dat", "rb");
    if (file == NULL) {
        printf("Total employees: 0\n");
        return;
    }
    
    // Move to end of file
    fseek(file, 0, SEEK_END);
    
    // Calculate file size
    long fileSize = ftell(file);
    
    // Calculate number of employees
    int count = fileSize / sizeof(struct Employee);
    
    fclose(file);
    printf("Total employees: %d\n", count);
}

// Simple menu function
void showMenu() {
    printf("\n=== SIMPLE EMPLOYEE SYSTEM ===\n");
    printf("1. Add Employee\n");
    printf("2. Show All Employees\n");
    printf("3. Count Employees\n");
    printf("4. Exit\n");
    printf("Choose an option: ");
}

int main() {
    int choice;
    
    printf("Welcome to Employee Management System!\n");
    printf("We will store data in binary file using fwrite/fread\n");
    
    do {
        showMenu();
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                displayEmployees();
                break;
            case 3:
                countEmployees();
                break;
            case 4:
                printf("Goodbye! Thank you for using the system.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);
    
    return 0;
}
