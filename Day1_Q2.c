// Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
#include<conio.h>

void main(){
    int x,y;
    clrscr();
    printf("Enter 1st number:");
    scanf("%d",&x);

    printf("Enter 2nd number:");
    scanf("%d",&y);

    // ADD
    printf("The sum of the numbers is:%d \n",x+y);

    // DIFF
    printf("The difference of the numbers is:%d \n",x-y);
 
    // PRODUCT
    printf("The product of the numbers is:%d \n",x*y);

    // QUOTIENT
    if (y==0)
    printf("The quotient of the numbers is: Indefinite \n");
    else 
    printf("The quotient of the numbers is:%d \n", x/y);
    getch();

}
