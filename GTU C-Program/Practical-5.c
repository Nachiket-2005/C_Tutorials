#include<stdio.h>

int main(){
    float km;
    printf("\n Eter length in KM : ");
    scanf("%f",&km);

    printf("\n %.2f km = %.2f meter",km,km * 1000);
    printf("\n %.2f km = %.2f inches",km,km * 39370.08);
    printf("\n %.2f km = %.2f feets",km,km * 3280.84);   
    printf("\n %.2f km = %.2f centimeter",km,km * 1000 * 100);  
    return 0;
}