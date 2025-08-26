// Write a program to swap two numbers using a third variable.

#include<stdio.h>

int main() {
    int x,y,z;
    clrscr();
    printf("Enter 1st number:");
    scanf("%d",&x);

    printf("Enter 2nd number:");
    scanf("%d",&y);

    z=x;
    x=y;
    y=z;
    printf("%d\n%d",x,y);
    return 0;
    getch();


}
