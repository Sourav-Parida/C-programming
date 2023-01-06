#include<stdio.h>
#include<string.h>

void main(){
    char str[1000],str2[1000];
    printf("Enter the line of string:");
    scanf("%[^\n]s",str);
    strcpy(str2,str);
    printf("original string:%s",str);
    printf("\ncopied string:%s",str2);
}