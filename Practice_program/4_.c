// find area of circumference of a circle


#include<stdio.h>

#define Pi 3.1416   

int main(){
    float r,a,c;

    printf("enter the radius: ");
    scanf("%f", &r);
    a = Pi*r*r;
    c = 2*Pi*r;
    printf("Area=%.2f\nCircumference=%.2f", a,c);
    return 0;
}