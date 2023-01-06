#include<stdio.h>
int DIGITMUL(int *);
int main(){
    int n,x;
    printf("Enter the number :---");
    scanf("%d",&n);
    x=DIGITMUL(&n);
    printf("Product of digits is := %d ",x);
}
int DIGITMUL(int *n){
    int m=1,i;
    for (i=0;*n!=0;i++){
        m=m * (*n % 10);
        *n=*n/10;
    }
    return m;
}
