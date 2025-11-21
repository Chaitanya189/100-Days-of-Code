#include <stdio.h>

// Define enum for menu options
enum MenuOptions {
    FILE_NEW = 1,
    FILE_OPEN,
    FILE_SAVE = 5,
    FILE_EXIT,
    EDIT_COPY = 10,
    EDIT_PASTE,
    EDIT_CUT
};

void printEnumInfo(int value) {
    switch (value) {
        case FILE_NEW: printf("FILE_NEW"); break;
        case FILE_OPEN: printf("FILE_OPEN"); break;
        case FILE_SAVE: printf("FILE_SAVE"); break;
        case FILE_EXIT: printf("FILE_EXIT"); break;
        case EDIT_COPY: printf("EDIT_COPY"); break;
        case EDIT_PASTE: printf("EDIT_PASTE"); break;
        case EDIT_CUT: printf("EDIT_CUT"); break;
        default: printf("UNKNOWN"); break;
    }
}

int main() {
    // Array of all enum values
    int enumValues[] = {FILE_NEW, FILE_OPEN, FILE_SAVE, FILE_EXIT, 
                       EDIT_COPY, EDIT_PASTE, EDIT_CUT};
    
    int count = sizeof(enumValues) / sizeof(enumValues[0]);
    
    printf("=== Menu Options Enum ===\n");
    printf("%-15s %-10s\n", "Enum Name", "Value");
    printf("----------------------------\n");
    
    for (int i = 0; i < count; i++) {
        printf("%-15s %-10d\n", "");
        printEnumInfo(enumValues[i]);
        printf("%*d\n", 25 - 15, enumValues[i]); // Adjust spacing
    }
    
    return 0;
}
