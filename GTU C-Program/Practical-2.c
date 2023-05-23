#include<stdio.h>

int main(){
    int h,b;
    float a;
    printf("\n Enter Height : ");
    scanf("%d",&h);
    printf("\n Enter Base : ");
    scanf("%d",&b);
    a = 0.5 * h * b;
    printf("\n Area of a triangle : %.2f", a);
    return 0; 
}