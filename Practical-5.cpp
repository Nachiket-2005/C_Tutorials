#include<stdio.h>

int main(){
    float km;
    
    printf("\n Enter The distance in km : ");
    scanf("%f",&km);
    
    printf("%.2f km = %.2f meters\n",km,km * 1000);
    printf("%.2f km = %.2f feets\n",km,km * 3280.84);
    printf("%.2f km = %.2f inches\n",km,km * 39370.08);
    printf("%.2f km = %.2f centimeters\n",km,km * 1000 * 100);
    
    return 0;
}