#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void ROOT(int a, int b, int c){
    if (a == 0) {
        printf("Invalid");
        return;
    }
    int d = b * b - 4 * a * c;
    double sqrt_val = sqrt(abs(d));
    if (d > 0) {
        printf("Roots are real and different ");
        printf("%lf and %lf",(double)(-b + sqrt_val) / (2 * a),
            (double)(-b - sqrt_val) / (2 * a));
    }
    else if (d == 0){
        printf("Roots are real and same ");
        printf("%lf",(double)-b / (2 * a));
    }
    else{
        printf("Roots are complex ");
        printf("%lf + i%lf and %lf - i%lf", 
               (double)-b / (2 * a),sqrt_val/(2 * a), 
               (double)-b / (2 * a),sqrt_val/(2 * a));
    }
}
void main()
{
    int a,b,c;
    printf("Enter a,b,c:");
    scanf("%d,%d,%d",&a,&b,&c);
    ROOT(a, b, c);
}