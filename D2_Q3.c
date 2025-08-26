// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
void main(){
    int l,b,area,perimeter;

    printf("The length of the rectangle is:");
    scanf("%d",&l);
    printf("The breadth of the rectangle is:");
    scanf("%d",&b);
    
    area=l*b;
    printf("The area of the rectangle is %d sq units \n", area);
    peri=2*(l+b);
    printf("The perimeter of the rectangle is %d sq units", perimeter);


    getch();
}
