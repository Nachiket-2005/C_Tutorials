#include<stdio.h>
int main(){
    float basic;
    printf("\n================================");
    printf("\n              SALARY SLIP");
    scanf("%f",&basic);
    printf("\n================================");
    printf("\n basic : %.2f ",basic);
    printf("\n DA : %.2f ",basic * 0.10);
    printf("\n HRA : %.2f ",basic * 0.075);;
    printf("\n MA : %.2f ",300.0);
    printf("\n================================");
    printf("\n GROSS : %.2f ",basic + (basic * 0.10) + (basic * 0.075) + 300.0);
    printf("\n================================");
    printf("\n PF : %.2f ",(basic * 0.125));
    printf("\n================================");
    printf("\n NET : %.2f",(basic + (basic * 0.10)+(basic * 0.075)+300.0)-(basic * 0.125));
    printf("\n===============================");
    return 0;
}