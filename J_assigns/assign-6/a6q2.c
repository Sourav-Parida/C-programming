#include<stdio.h>

void main(){
    char str[10];
    int i,upper=0,lower=0;
    printf("Enter the line of string:");
    scanf("%[^\n]%*c",str);
    for(i=0;i<10;i++){
        if (str[i] >= 'A' && str[i] <= 'Z')
            upper++;
        else if (str[i] >= 'a' && str[i] <= 'z')
            lower++;
    }
    printf("%s",str);
    printf("\nNumber of uppercase= %d",upper);
    printf("\nNumber of lowercase= %d",lower);
}