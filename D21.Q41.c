#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, swappedNum;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int original = num;

    if (num < 0) {
        num = -num;
    }

    lastDigit = num % 10;

    digits = (int)log10(num); 
    firstDigit = (int)(num / pow(10, digits));

    int middlePart = num % (int)pow(10, digits);  
    middlePart = middlePart / 10;                

    swappedNum = lastDigit * (int)pow(10, digits);  
    swappedNum += middlePart * 10;                  
    swappedNum += firstDigit;                      

    if (original < 0) {
        swappedNum = -swappedNum;
    }
    printf("Original number: %d\n", original);
    printf("After swapping first and last digit: %d\n", swappedNum);

    return 0;
}
