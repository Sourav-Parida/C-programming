#include<stdio.h>

void main(){
float n = 14.52,*p;
p=&n;
printf("\nValue of n is : %f",n);
printf("\nValue of address is : %p",p);
printf("\nAddress in decimal form: %u",p);
printf("\nAddress in a hexadecimal: %x",p);
printf("\nAddress in an octal form: %o",p);
}