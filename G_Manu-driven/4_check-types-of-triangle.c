/*
Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an isosceles
triangle or not
b. Check whether a given set of three numbers are lengths of sides of a right
angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle or not
d. Exit             */


#include<stdio.h>
#include<conio.h>
int main(){
    int n,a,b,c;
    printf("Enter the option no:-");
    scanf("%d",&n);
    switch(n){
        case 1:
            printf("Enter the length of one side:-");
            scanf("%d",&a);
            printf("Enter the length of 2nd side:-");
            scanf("%d",&b);
            printf("Enter the length of 3rd side:-");
            scanf("%d",&c);
            if(a==b || b==c || c==a)
                printf("This triangle is an isosceles triangle");
            else
                printf("This triangle is not an isosceles triangle");
            getch();
            break;
        case 2:
            printf("Enter the length of one side:-");
            scanf("%d",&a);
            printf("Enter the length of 2nd side:-");
            scanf("%d",&b);
            printf("Enter the length of 3rd side:-");
            scanf("%d",&c);
            if((a*a)+(b*b)==c*c || (b*b)+(c*c)==a*a || (c*c)+(a*a)==b*b)
                printf("This triangle is a Right angle triangle");
            else
                printf("This triangle is not a Right angle triangle");
            getch();
            break;
        case 3:
            printf("Enter the length of one side:-");
            scanf("%d",&a);
            printf("Enter the length of 2nd side:-");
            scanf("%d",&b);
            printf("Enter the length of 3rd side:-");
            scanf("%d",&c);
            if(a==b==c)
                printf("This triangle is an equilateral triangle");
            else
                printf("This triangle is not an equilateral triangle");
            getch();
            break;
        case 4:
            printf("EXIT");
            getch();
            break;
        default:
            printf("Entered Wrong option");
            getch();
            }
    }