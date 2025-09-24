#include <stdio.h>

int main() {
    long long num;
    int freq[10] = {0}; 
    int digit, i, maxDigit = 0, maxFreq = 0;

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }
    for (i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxDigit = i;
        }
    }

    printf("Digit that occurs most is %d (appears %d times)\n", maxDigit, maxFreq);

    return 0;
}
