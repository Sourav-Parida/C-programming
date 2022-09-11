/*
  *
 ***
*****
 ***
  *
*/

#include<stdio.h>
#include<conio.h>
int main(){
    int i=1;
    while(i<=2){
        int b=1;
        while(b<=(3-i)){
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
    int j=1;
    while(j<=3){              // number of lines
        int e=1;
        while(e<=(j-1)){           // creates space
            printf(" ");
            e = e+1;
        }              
        int c = 1 ;
        while(c<=4-j){
            printf("*");          // creates half 
            c=c+1;
        }
        int d=1;
        while(d<=c-2){                // creates another half
            printf("*");
            d=d+1;
        }
        printf("\n");
        j=j+1;
    }
return 0;
}