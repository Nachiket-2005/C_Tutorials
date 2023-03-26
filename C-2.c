#include<stdio.h>
void calculateprice(float value);
int main()
{
    float value;
    printf("Enter The Value : ");
    scanf("%f",&value);
    calculateprice(value);
    printf("%f",value);
    return 0 ;
}

void calculateprice(float value){
    value = value + (0.18 * value);
    printf("Final Value is : %.2f",value);
}