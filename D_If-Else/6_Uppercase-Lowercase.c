/*6. Write a program to check whether a given character is an alphabet (uppercase), an
alphabet (lower case), a digit or a special character.*/

#include<stdio.h>
#include<conio.h>
int main(){
    char cherecter;
    printf("Enter the Cherecter:--");
    scanf("%c",&cherecter);
    if('A'<=cherecter && 'Z'>=cherecter)
        printf("the cherecter is alphabet and uppercase");
    else if ('a'<=cherecter && 'z'>= cherecter)
        printf("the cherecter is alphabet and lowrcase");
    else if('0'<=cherecter && cherecter<='9')
        printf("the cherecter is a digit");
    else  
        printf("the cherecter is a special cherecter");

}