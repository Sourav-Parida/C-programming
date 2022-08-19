/*Write a program to calculate the profit percentage upon selling a product. 
Cost price and selling price are given by the user.*/

#include<conio.h>
#include<stdio.h>

int main(){
    float cost,selling,profit;
    printf("Enter the cost price:- ");
    scanf("%f",&cost);
    printf("Enter the selling price:- ");
    scanf("%f",&selling);
    profit = selling-cost;
    printf("Profit is:- %f rupees",profit);
    printf("\nProfit percentage is:--- %f percentage",profit/cost*100);
    return 0;
}
