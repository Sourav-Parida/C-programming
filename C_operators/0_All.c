#include<stdio.h>
#include<conio.h>
int main(){
    int i=1,n,s;
    s=0;
    printf("\n 1. Size of an int, a float, a char and a double ");
    printf("\n 2. Find last digit of a given number.");
    printf("\n 3. Find first digit of a given three digit number.");
    printf("\n 4. Find middle digit of a given three digit number.");
    printf("\n 5. Write a program to swap values of two int variables.");
    printf("\n 6. Swap values of two int variables without using third variable.");
    printf("\n 7. Make the last digit of a number stored in a variable as zero.");
    printf("\n 8. Append a digit in the number and print the resulting number.");
    printf("\n 9. Convert INR into USD.");
    printf("\n 10. Rotate its digits.");
    printf("\n 11. Rotate its digits by one position towards the right.");
    printf("\n 12. Exit the program.");
    while(i>0){       
        printf("\n\nEnter the option no:==");
        scanf("%d",&n);
        switch(n){
            case 1:
                printf("\n");
                int I,C,F,D;
                I=sizeof(int);
                C=sizeof(char);
                F=sizeof(float);
                D=sizeof(double);
                printf("Size of int:-    %d",I);
                printf("\nSize of char:-   %d",C);
                printf("\nSize of float:-  %d",F);
                printf("\nSize of double:- %d",D);
                getch();
                break;
            case 2 :                                                  
                printf("Enter a Number:-- ");
                int n4;
                scanf("%d",&n4);
                printf("last digit of the Number is - %d",n4%10);
                getch();
                break;
            case 3:
                printf("Enter a 3 digit Number:-- ");
                int n5;
                scanf("%d",&n5);
                printf("the 1st digit of a 3 digit no is - %d",n5/100);
                getch();
                break;
            case 4:                                                   
                printf("Enter a 3 digit Number:-- ");
                int a1,b1,c1;
                scanf("%d",&a1);
                b1=a1%100;
                c1=b1/10;
                printf("the 2st disit of a 3 digit no is - %d",c1);
                getch();
                break;
            case 5:
                printf("Enter value for a:-- ");
                int a2,b2,c2;
                scanf("%d",&a2);
                printf("Enter value for b:-- ");
                scanf("%d",&b2);
                c2=b2;
                b2=a2;
                a2=c2;
                printf("Value in a = %d \nValue in b = %d",a2,b2);
                getch();                                            
                break;
            case 6:
                printf("Enter value for a:-- ");
                int a3,b3;
                scanf("%d",&a3);
                printf("Enter value for b:-- ");
                scanf("%d",&b3);
                a3=a3+b3;
                b3=a3-b3;
                a3=a3-b3;
                printf("Value in a = %d \nValue in b = %d",a3,b3);
                getch();
                break;
            case 7:                                                   
                printf("Enter a Number:-- ");
                int a4,b4,c4;
                scanf("%d",&a4);
                b4=a4%10;
                a4=a4-b4;
                printf("the changed number is:---- %d",a4);
                getch();
                break;
            case 8: 
                printf("Enter a Number:-- ");
                int a5,b5,c5;
                scanf("%d",&a5);
                printf("Enter a Number to append:-- ");
                scanf("%d",&b5);
                c5=(a5*10)+b5;
                printf("the no will be :--- %d",c5);
                getch();
                break;
            case 9:
                printf("Enter amount in INR :-- ");
                double USD,Amount;
                scanf("%lf",&Amount);
                USD=Amount/76.23;
                printf("Amount in USD is :--- %.3lf",USD);
                getch();
                break;
            case 10:
                printf("Enter the 3 digit Number:-- ");
                int a6,b6,c6,d6,e6;
                scanf("%d",&a6);
                e6=a6%10;         // Last no.
                d6=a6%100;
                c6=d6/10;         // Middle no.
                b6=a6/100;        // Last no.
                printf("The no will be-- %d",(e6*100)+(c6*10)+b6);
                getch();
                break;
            case 11:
                printf("Enter the 3 digit Number:-- ");
                int a7,b7,c7,d7,e7;
                scanf("%d",&a7);
                d7=a7%10;         //stores last digit
                b7=a7/10;
                c7=d7*100+b7;        
                printf("The no will be-- %d",c7);
                getch();
                break;
            case 12:
                printf("Exit the code");
                s=1;
                break;
            default :
                printf("Entered Wrong option");
                }
        if(s==1)
            break;
        i=i+1;
    }
    getch();
}