#include<stdio.h>
void ar_cir();
void ar_tri();
void ar_rec();

void main(){                              // TNRN
    ar_cir();
    ar_tri();
    ar_rec();
}
void ar_cir(){
    double r;
    printf("Enter Radius:");
    scanf("%lf",&r);
    printf("Area of circle is:%.2lf",3.14*r*r);
}
void ar_tri(){
    double b,h;
    printf("\nEnter base & height:");
    scanf("%lf,%lf",&b,&h);
    printf("Area of triangle is:%.2lf",(b*h)/2);
}
void ar_rec(){
    double l,b;
    printf("\nEnter lenght & breadth:");
    scanf("%lf,%lf",&l,&b);
    printf("Area of rectangle is:%.2lf",l*b);
}

