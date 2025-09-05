#include <stdio.h>

int main() {
    int late_days;
    float fine = 0.0;

    printf("Enter the number of days late: ");
    scanf("%d", &late_days);

    if (late_days <= 0) {
        printf("No fine. Thank you for returning on time!\n");
    } else if (late_days <= 5) {
        fine = late_days * 2;
        printf("Fine: ₹%.2f\n", fine);
    } else if (late_days <= 10) {
        fine = 5 * 2 + (late_days - 5) * 4;
        printf("Fine: ₹%.2f\n", fine);
    } else if (late_days <= 30) {
        fine = 5 * 2 + 5 * 4 + (late_days - 10) * 6;
        printf("Fine: ₹%.2f\n", fine);
    } else {
        printf("Membership Cancelled.\n");
    }

    return 0;
}
