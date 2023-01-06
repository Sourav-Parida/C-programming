#include<stdio.h>
void main (){
    int a,b,*p1,*p2,r;
    printf("Enter two number:");
    scanf("%d,%d",&a,&b);
    p1 = &a;
    p2 = &b;
    r = *p1 + *p2;
    printf ("Addition= %d\n",r);
    r= *p1 - *p2;
    printf ("Subtraction= %d\n",r);
    r= *p1 * *p2;
    printf ("Multiplication= %d\n",r);
    r= *p1 / *p2;
    printf ("Division= %d\n",r);
    r= *p1 % *p2;
    printf ("Modulus division= %d\n",r);
}