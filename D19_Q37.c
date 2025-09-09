#include <stdio.h>

int findHCF(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    int hcf, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    hcf = findHCF(num1, num2);

    lcm = (num1 * num2) / hcf;

    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}
