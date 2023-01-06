#include <stdio.h>
void main()
{
    char str[1000];
    int i;
    printf("Enter a string :");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\n';i++){}
    printf("Length of the string = %d",i);
    printf("\nThe string is:%s",str);
}