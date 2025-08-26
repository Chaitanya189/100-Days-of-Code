// Q.1 Write a program to input two two numbers and display their sum.

#include<stdio.h>

int main() {
  int a,b;
clrscr();
printf("Enter first number :");
scanf("%d", &a);

printf("Enter second number :");
scanf("%d", &b);

printf("The sum of two number is %d", a+b);
return 0;
getch();
}
