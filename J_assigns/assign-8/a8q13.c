#include <stdio.h>
#include<string.h>
void main(){
	char *s,str[100];
	int len,i;
	printf("\nENTER A STRING: ");
	scanf("%[^\n]s",str);
    s=str;
	len=strlen(s);
	printf("\nTHE REVERSE OF THE STRING IS:");
	for(i=len;i>=0;i--)
		printf("%c",*(s+i));
}