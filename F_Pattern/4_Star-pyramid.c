/*  3. Write a program to display following patterns
   *   
  ***
 *****
*******   */

#include<stdio.h>
#include<conio.h>

int main(){
    int i=1;
    while(i<=4){
        int b=1;
        while(b<=(4-i)){
            printf(" ");
            b=b+1;
        }
        int a=1;
        while(a<=((i*i)-(i-1)*(i-1))){
            printf("*");
            a=a+1;
        }
        printf("\n");
        i=i+1;
    }


}