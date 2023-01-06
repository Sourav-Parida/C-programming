#include<stdio.h>
#include<string.h>

void main(){
    char str[100],str2[100];
    int r;
    printf("Enter the line of string1:");
    scanf("%[^\n]%*c", str);
    printf("Enter the 2nd line of string:");
    scanf("%[^\n]%*c", str2);
    r = strcmp(str, str2);
    if(r==0)
        printf("Both strings are same");
    else
        printf("Both strints are not same");
}