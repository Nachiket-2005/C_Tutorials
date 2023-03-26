#include<stdio.h>

int main(){
    float F,C;

    printf("\n Enter Temperature in Celsius : ");
    scanf("%f",&C);

    F =  (1.8 * C) + 32;

    printf("\n After Completion of Process Converted Celsius into Farehnheit : %.2f ",F);

    return 0;
}