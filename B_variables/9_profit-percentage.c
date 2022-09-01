/*Write a program to calculate the profit percentage upon selling a product. 
Cost price and selling price are given by the user.*/

#include<conio.h>
#include<stdio.h>

int main(){
    double cost,selling;
    printf("Enter the cost price:- ");
    scanf("%lf",&cost);
    printf("Enter the selling price:- ");
    scanf("%lf",&selling);
    double profit = selling-cost;
    printf("Profit is:- %.3lf rupees",profit);
    printf("\nProfit percentage is:--- %.3lf percentage",profit/cost*100);
    getch();
    return 0;
}