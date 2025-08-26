// Write a program to find and display the sum of the first n natural numbers

#include<stdio.h>

int main() {
    int x,sum=0;
    clrscr();
    printf("Enter the number of terms");
    scanf("%d",&x);

    for(int i=0;i<=x;i++)
        { sum+=i;}

    printf("%d\n",sum);
    return 0;
    getch();


}
