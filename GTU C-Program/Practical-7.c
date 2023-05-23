#include<stdio.h>

int main(){
    int t ;
    float u,a,d;

    printf("\n Enter The Value of u : ");
    scanf("%f",&u);
    printf("\n Enter The Value of a : ");
    scanf("%f",&a);
    printf("\n Enter The Value of t : ");
    scanf("%d",&t);

    d = (u * t)  + (a * t * t)/2.0;

    printf("\n The Distance : %.2f",d);
    return 0;
}