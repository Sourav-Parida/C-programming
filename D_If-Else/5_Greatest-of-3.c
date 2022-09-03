/* 5. Write a program to find greater among three numbers. If two or three numbers are
identical and greatest among all then print it only once.*/

#include<stdio.h>
#include<conio.h>
int main(){
    double a,b,c,d;
    printf("Enter the 1st number:==");
    scanf("%lf",&a);
    printf("Enter the 2nd number:==");
    scanf("%lf",&b);
    printf("Enter the 3rd number:==");
    scanf("%lf",&c);
    if(a>=b && a>=c && b!=c )
        printf("The Gretest number is:= %lf",a);
    else if (b>a && b>=c)
        printf("The Gretest number is:= %lf",b);
    else if(c>a && c>b)
        printf("The Gretest number is := %lf",c);

}