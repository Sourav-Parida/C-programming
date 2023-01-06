#include <stdio.h>

void swap(int *,int *);
void main(){
    int x,y;
printf("Enter two number:");
scanf("%d,%d",&x,&y);
printf("%d %d\n",x,y);
swap(&x, &y);
printf("%d %d\n",x,y);
}

void swap(int *a, int*b){
int temp;
temp = *a;
*a = *b;
*b = temp;
}