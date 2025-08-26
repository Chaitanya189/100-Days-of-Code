// Write a program to input an integer and check whether it is even or odd using if–else.

#include<stdio.h>

int main() {
    int n;
    clrscr();
    printf("Enter the number:");
    scanf("%d",&n);


    if(n%2==0){
        printf("%d is even number",n);
    }

    else printf("%d is odd number",n);

    return 0;
    getch();


}
