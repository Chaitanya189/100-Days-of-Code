// Write a program to calculate simple and compound interest for given principal, rate, and time.

#include<stdio.h>
#include<math.h>

int main() {
    float p,r,t,SI,CI,amount,n;
    clrscr();
    printf("Enter the principal amount:");
    scanf("%f",&p);

    printf("Enter the rate:");
    scanf("%f",&r);

    printf("Enter the time period in years:");
    scanf("%f",&t);

    printf("Enter the no of times interest is compounded per year:");
    scanf("%f",&n);


    SI=p*r*t/100;

    r=r/100;
    // TOTAL AMOUNT
    amount = p*pow((1+r/n),n*t);

    CI=amount-p;
    
    printf("The simple interest will be:%f\n The compound interest will be:%f",SI,CI);

    return 0;
    getch();


}
