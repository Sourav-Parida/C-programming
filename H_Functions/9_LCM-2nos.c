// 9. Write a function to calculate LCM of two numbers. (TSRS)

#include<stdio.h>
#include<conio.h>

int LCM(int,int);
int n1,n2,f;
int main(){
    printf("Enter the 1st number:--");
    scanf("%d",&n1);
    printf("Enter the 1st number:--");
    scanf("%d",&n2);
    f= LCM(n1,n2);
    printf("The lcm of the numbers is == %d",f);
    return 0;
}
int LCM(int a,int b){
    int i=0;
    int lcm;
    for(lcm=1;lcm<=a*b;lcm++)
        if(lcm%a==0 && lcm%b==0)
            break;
    return lcm;
}