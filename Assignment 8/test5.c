/* 5. Write a program to find greater among three numbers. If two or three numbers are
identical and greatest among all then print it only once.*/

#include<stdio.h>
#include<conio.h>
int main(){
    float a,b,c,d;
    printf("Enter the 1st number:--");
    scanf("%f",&a);
    printf("Enter the 2nd number:--");
    scanf("%f",&b);
    printf("Enter the 3rd number:--");
    scanf("%f",&c);
    if(a>=b && a>=c && b!=c )
        printf("print the gretest no is:--%f",a);
    else if (b>a && b>=c)
        printf("print the gretest no is:--%f",b);
    else if(c>a && c>b)
        printf("the retest no is :--%f",c);

}