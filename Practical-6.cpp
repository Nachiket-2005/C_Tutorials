#include<stdio.h>
int main(){
    float F,C;
   
    printf("\n Enter Temperature in Celcius : ");
    scanf("%f",&C);
    
    F = (C * 1.8) + 32;
    
    printf("\n %.2f Celcius =  %.2f Farenhiet",C,F);
    
    return 0;
}