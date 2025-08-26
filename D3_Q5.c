// Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>


void main() {
    float celsius,farenhite;
    clrscr();
    printf("The temp in celsius is:");
    scanf("%f",&celsius);

    farenhite = (cel*9)/5+32;
    printf("%f celsius is equal to %f in farenhite",celsius,farenhite);

    getch();

}
