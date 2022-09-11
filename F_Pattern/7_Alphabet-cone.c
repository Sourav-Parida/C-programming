/*
ABCDCBA
 ABCBA
  ABA
   A
*/

#include<stdio.h>
#include<conio.h>

int main(){
    int i=1;
    while(i<=4){              // number of lines
        int b=1;
        while(b<=(i-1)){           // creates space
            printf(" ");
            b = b+1;
        }
        char a='A';              
        int c = 1 ;
        while(c<=5-i){
        printf("%c",a);          // creates half 
        a=a+1;
        c=c+1;
        }
        int d=1;
        a=a-2;
        while(d<=c-2){                // creates another half
            printf("%c",a);
            a=a-1;
            d=d+1;
        }
        printf("\n");
        i=i+1;
    }
}