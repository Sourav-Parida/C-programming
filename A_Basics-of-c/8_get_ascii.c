//Write a C program to print character stored in a char variable, also print its ASCIIcode.
#include <stdio.h>  
#include<conio.h>

int main()  
{  
    char ch;
    printf("Enter cherecter:-  ");
    scanf("%c",&ch);
    printf("cherecter is:    %c\nThe ascii value is : %d",ch,ch);  
    getch();
    return 0;
}  
