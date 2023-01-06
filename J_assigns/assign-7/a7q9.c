#include<stdio.h>
int RECFACT(int);

int main(){
    int n,x;
    printf("Enter the number:---");
    scanf("%d",&n);
    x=RECFACT(n);
    printf("factorial of %d is := %d ",n,x);

}
int RECFACT(int n){
    if(n==0){
        return 1;
    }
    else
        return n*RECFACT(n-1);
}