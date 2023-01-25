#include<stdio.h>
int main(){
    float a,h,b;
    printf("\n Enter The hieght : ");
    scanf("%f",&h);
    printf("\n Enter The base : ");
    scanf("%f",&b);
    a = h * b * 0.5;
    printf("\n The area of Triangle is : %.2f",a);
    return 0;
}