#include <stdio.h>
#include <string.h>
void main()
{
    char a[100];
    printf("Enter a string:");
    scanf("%[^\n]s",a);
    printf("Length of the string = %d\n",strlen(a) );
}