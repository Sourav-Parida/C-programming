/*
1000001
 10001
  101
   1
*/

#include<stdio.h>
#include<conio.h>
int main(){
    int i=1;
    while(i<=4){
        int d=1;
        while(d<=(i-1)){           // creates space
            printf(" ");
            d = d+1;
        }
        printf("1");             
        int a = 2 ;
        while(a<=5-i){
        printf("0");          // creates half 
        a=a+1;
        }
        int b=2;
        while(b<=a-2){                // creates another half
            printf("0");
            b=b+1;
        }
    if(i<4){
        printf("1");
    }
    printf("\n");
    i=i+1;
    }
return 0;
}