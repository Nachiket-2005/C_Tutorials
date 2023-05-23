#include<stdio.h>

int main(){
    int P;
    float r,n,I;
    printf("\n Enter Principle Amount : ");
    scanf("%d",&P);
    printf("\n Enter Rate : ");
    scanf("%f",&r);
    printf("\n Enter No of Year : ");
    scanf("%f",&n);

    I = (P * r * n)/100.0;

    printf("\n Interest is = %.2f",I);
    return 0;
}