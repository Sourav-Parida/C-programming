//Write a program to calculate the volume of a Cuboid.
#include<conio.h>
#include<stdio.h>

int main() {
    double len;
    printf("Enter the lenght of cuboid:---");
    scanf("%lf",&len);
    printf("Volume of a Cuboid is:--%.3lf",len*len*len);
    getch();
    return 0;
}