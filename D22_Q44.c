#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;  

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        double numerator = 2 * i - 1;
        double denominator = i + 1;
        sum += numerator / denominator;
    }

    printf("Sum of the series up to %d terms = %.4f\n", n, sum);

    return 0;
}
