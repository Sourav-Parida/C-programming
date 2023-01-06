#include<stdio.h>
#include<string.h>

void main(){
    char str[1000];
    printf("Enter the line of string:");
    scanf("%[^\n]s",str);
    printf("original string:%s",str);
    printf("\nReversed string:%s",strrev(str));
}