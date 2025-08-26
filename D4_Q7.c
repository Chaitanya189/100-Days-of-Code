// Write a program to swap two numbers without using a third variable.


#include<stdio.h>

int main() {
    int x,y;
    clrscr();
    printf("Enter 1st number:");
    scanf("%d",&x);

    printf("Enter 2nd number:");
    scanf("%d",&y);

    x=x+y;
    y=x-y;
    x=x-y;
    printf("%d\n%d",x,y);
    return 0;
    getch();


}
