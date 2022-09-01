#include<stdio.h>
#include<conio.h>
int main(){
    int i=1,n,s;
    s=0;
    printf("\n 1. calculate the sum of two numbers ");
    printf("\n 2. calculate the area of a circle.");
    printf("\n 3. calculate the volume of a Cuboid.");
    printf("\n 4. calculate the simple interest");
    printf("\n 5. calculate the area of a rectangle");
    printf("\n 6. calculate the average of three numbers");
    printf("\n 7. calculate the square of a given number.");
    printf("\n 8. character as input and print its ASCII code.");
    printf("\n 9. calculate the profit percentage upon selling a product.");
    printf("\n 10. calculate the area of a triangle");
    printf("\n 11. Exit the program");
    while(i>0){       
        printf("\n\nEnter the option no:==");
        scanf("%d",&n);
        switch(n){
            case 1 :                                             
                printf("Enter 1st no. :- ");
                int a;
                scanf("%d",&a);
                int b;
                printf("Enter 2nd no. :- ");
                scanf("%d",&b);
                printf("Sum of the numbers is:==  %d",a+b);
                getch();
                break;
            case 2 :                                                  
                printf("enter radious :--");
                double radi;
                double pi=3.14;
                scanf("%lf",&radi);
                printf("Area of circle is :---%.3lf",pi*radi*radi);
                getch();
                break;
            case 3:
                printf("Enter the lenght of cuboid:---");
                double len;
                scanf("%lf",&len);
                printf("Volume of a Cuboid is:--%.3lf",len*len*len);
                getch();
                break;
            case 4:                                                   
                printf("Enter principal:- ");
                double P,T,M,Y,R;
                scanf("%lf",&P);
                printf("Enter the Time (no. of years):- ");
                scanf("%lf",&Y);
                printf("Enter the Time(no. of Months):- ");
                scanf("%lf",&M);
                printf("Enter the Rate of Intrest:- ");
                scanf("%lf",&R);
                T=Y+(M/12);
                printf("Interest Amount is :--- %.3lf",(P*R*T)/100);
                getch();
                break;
            case 5:
                printf("Enter length:- ");
                double leng,bri;
                scanf("%lf",&leng);
                printf("Enter bridth:- ");
                scanf("%lf",&bri);
                printf("Area of rectangle is:--- %.2lf",leng*bri);
                getch();                                             
                break;
            case 6:
                printf("Enter one no.:- ");
                double A,B,C;
                scanf("%lf",&A);
                printf("Enter 2nd no.:- ");
                scanf("%lf",&B);
                printf("Enter 3rd no.:- ");
                scanf("%lf",&C);
                printf("Average of 3 numbers is:--- %.3lf",(A+B+C)/3);
                getch();
                break;
            case 7:                                                   
                printf("Enter no.:- ");
                double n;
                scanf("%lf",&n);
                printf("square of the no. is:--- %.3f",n*n);
                getch();
                break;
            case 8: 
                printf("Enter the cherecter:- ");
                char ch;
                scanf("%c",ch);
                printf("ASCII of the cherecter is:--- %d",ch);
                getch();
                break;
            case 9:
                printf("Enter the cost price:- ");
                double cost,selling;
                scanf("%lf",&cost);
                printf("Enter the selling price:- ");
                scanf("%lf",&selling);
                double profit = selling-cost;
                printf("Profit is:- %.3lf rupees",profit);
                printf("\nProfit percentage is:--- %.3lf percentage",profit/cost*100);
                getch();
                break;
            case 10:
                printf("Enter the base:- ");
                double base,height,area;
                scanf("%lf",&base);
                printf("Enter the height:- ");
                scanf("%lf",&height);
                area = 0.5*base*height;
                printf("area of the triangle is :--%.3lf",area);
                getch();
                break;
            case 11:
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