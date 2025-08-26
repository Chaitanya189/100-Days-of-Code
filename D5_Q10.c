// Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include<stdio.h>

int main() {
    int time,tempraturetime,hr,min,sec=0;
    clrscr();
    printf("Enter the time in seconds:");
    scanf("%d",&time);

    hr=time/3600;
    tempraturetime=time%3600;
    min=tempraturetime/60;
    sec=tempraturetime%60;
        
    printf("%d:%d:%d",hr,min,sec);
    

    return 0;
    getch();


}
