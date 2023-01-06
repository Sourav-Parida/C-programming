#include<stdio.h>
int SWAP(int,int,int[]);

int SWAP(int a, int b, int arr[]){
    a=a+b-(b=a);
    arr[0]=a;
    arr[1]=b;
    }
void main(){
    int a,b,str[2];
    printf("Enter value for a:-- ");
    scanf("%d",&a);
    printf("Enter value for b:-- ");
    scanf("%d",&b);
    SWAP(a,b,str);
    printf("Value in a = %d \nValue in b = %d",str[0],str[1]);

}