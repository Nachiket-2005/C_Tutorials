#include<stdio.h>
int main()
{
    int number1, number2;
    float Addition, Subtraction, Multiplication,Division;
    
    printf("\n Enter First No. : ");
    scanf("%d",&number1);
    printf("\n Enter Second No. : ");
    scanf("%d",&number2);
    
    Addition = number1 + number2;
    Subtraction = number1 - number2;
    Multiplication = number1 * number2;
    Division = number1/number2; 
    
    
    printf("\n Addition is : %.2f",Addition);
    printf("\n Subtraction is : %.2f",Subtraction);
    printf("\n Multiplication is =%.2f",Multiplication);
    printf("\n Division is : %.2f",Division);
    
    return 0;

}