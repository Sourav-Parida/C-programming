/* 
Write a menu driven program with the following options:
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Exit  
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int n,a,b,s,i;
    float c,d;
    i=1;
    while(i>0){
        s=0;
        printf("\n");
        printf("1. Addition \n2. Subtraction \n3. Multiplication \n4. Division \n5. Exit");
        printf("\n");       
        printf("Enter the option no:-");
        scanf("%d",&n);
        switch(n){
            case 1 :                                             // ADDITION
                printf("Enter 1st no. :- ");
                scanf("%d",&a);
                printf("Enter 2nd no. :- ");
                scanf("%d",&b);
                printf("Sum of the numbers is:==  %d",a+b);
                break;
            case 2 :                                                  // SUBSTRACTION
                printf("Enter 1st no. :- ");
                scanf("%d",&a);
                printf("Enter 2nd no. :- ");
                scanf("%d",&b);
                printf("Substraction of the numbers is:==  %d",a-b);
                break;
            case 3:                                                    //MULTIPLICATION
                printf("Enter 1st no. :- ");
                scanf("%d",&a);
                printf("Enter 2nd no. :- ");
                scanf("%d",&b);
                printf("Multiplication of the numbers is:==  %d",a*b);
                break;
            case 4:                                                   // DIVISION
                printf("Enter 1st no. :- ");
                scanf("%f",&c);
                printf("Enter 2nd no. :- ");
                scanf("%f",&d);
                printf("Division of two numbers is:==  %f",c/d);
                break;
            case 5:
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