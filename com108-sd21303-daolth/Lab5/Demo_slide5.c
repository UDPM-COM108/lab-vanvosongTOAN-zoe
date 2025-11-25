#include <stdio.h>
#include <math.h>

int main(){
    printf("Nhap vao a,b,c: ");
    double a,b,c;
    scanf("%lf %lf %lf", &a, &b, &c);

    double x = sqrt(a);
    printf("Can bac 2 cua %lf", x);
    double max =a;
    if(max > b)
        max = a;
    else if(max < c)
        max = c;
    printf("\nMax la %lf", max);
    //printf("\nMin la %lf", fmin(fmin(a,b),c));
    return 0;
}