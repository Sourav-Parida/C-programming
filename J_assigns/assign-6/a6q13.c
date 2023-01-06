#include<stdio.h>
#include<string.h>

void main(){
    char str[1000],str2[1000];
    printf("Enter the line of string:");
    scanf("%[^\n]%*c", str);
    printf("Enter the 2nd line of string:");
    scanf("%[^\n]%*c", str2);
    strcat(str,str2);
    printf("After concatenate:%s",str);
}