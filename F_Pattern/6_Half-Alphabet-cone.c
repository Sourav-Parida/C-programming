/*
ABCD
ABC
AB
A
*/

#include<stdio.h>
#include<conio.h>

int main(){
    int i=1;
    while(i<=4){
        char a='A';
        int b = 1 ;
        while(b<=5-i){
        printf("%c",a);
        a=a+1;
        b=b+1;
        }
        printf("\n");
        i=i+1;
    }
}

