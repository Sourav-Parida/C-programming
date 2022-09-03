//8. Write a program which takes the month number as an input and display number of days in that month.

#include<stdio.h>
#include<conio.h>
int main(){
    int mn;
    printf("Enter the month no:--");
    scanf("%d",&mn);
    if (mn%2==0 && mn!=2 && mn!=8)
        printf("no of days in this month is 30");
    else if (mn==2)
        printf("no of days in this month is 28");
    else
        printf("no of days in this month is 31");
getch();
}