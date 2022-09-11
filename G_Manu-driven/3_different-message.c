// Write a program which takes the day number of a week and displays a unique greeting message for the day.

#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    printf("Enter the option no:-");
    scanf("%d",&n);
    switch(n){
        case 1:
            printf("hello today is Monday");
            getch();
            break;
        case 2:
            printf("hello today is tuesday");
            getch();
            break;
        case 3:
            printf("hello today is wednessday");
            getch();
            break;
        case 4:
            printf("hello today is thursday");
            getch();
            break;
        case 5:
            printf("hello today is friday");
            getch();
            break;
        case 6:
            printf("hello today is saturday");
            getch();
            break;
        case 7:
            printf("hello today is sunday");
            getch();
            break;
        default :
        printf("wrong day number entered");
        getch();
    }
}