// 9. Write a program to calculate LCM of two numbers

#include<stdio.h>
#include<conio.h>

int main(){
    int i=0;
    int a,b,lcm;
    printf("Enter the 1st number to find lcm:-");
    scanf("%d",&a);
    printf("Enter the 2nd number to find lcm:-");
    scanf("%d",&b);
    for(lcm=1;lcm<=a*b;lcm++)
        if(lcm%a==0 && lcm%b==0)
            break;
    printf("LCM is %d",lcm);

}