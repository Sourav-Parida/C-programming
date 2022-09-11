//1. Write a program which takes the month number as an input and display number of days in that month.

#include<stdio.h>
#include<conio.h>

int main(){
    int mn;
    printf("Enter no of month:-");
    scanf("%d",&mn);
    if(0<mn && mn<13)
        if(mn !=8 || mn!= 2)
            switch(mn%2){
                case 1 :
                    printf("This month has 31 days");
                    break;
                case 0 :
                    printf("This month has 30 days");
                    break;
                }
        else if(mn==8)
            printf("This month has 31 days");
            
        else
            printf("This month has 28 days or 29 days depending upon Year");
            
        
    else
        printf("Wrong month number Entered.");
getch();
}