/*
54321
4321
321
21
1
*/

#include<stdio.h>
#include<conio.h>
int main(){
    int i=1;
    while(i<=5){
        int a=6-i;
        while(a<= 6-i && a>0){
            printf("%d ",a);
            a = a-1;
        }
    printf("\n");
    i=i+1;
    }
return 0;
}