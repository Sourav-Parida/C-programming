/*
   1
  121
 12321
1234321
*/

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
        int a=1,c;
            while (a<=i){
                printf("%d",a);
                a=a+1;
            }
            c=a-2;
            while (c>=1){
                printf("%d",c);
                c=c-1;
            }
        printf("\n");
        i=i+1;
    }


}