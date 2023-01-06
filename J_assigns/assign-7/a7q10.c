#include<stdio.h>
int count(int);

void main(){
    int n,x;
    printf("Enter the number:---");
    scanf("%d",&n);
    x=count(n);
    printf("Number of digits is := %d ",x);
}
int count(int n){
    static int i;
    if(n>0){
        i=i+1;
        count(n/10);
    }
    else
        return i;
}