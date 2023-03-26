#include<stdio.h>
int main(){
     int Add,Sub,Multi;
     float a,b,Div;
     printf("\n Enter First Number : ");
     scanf("%f",&a);
     printf("\n  Enter Second Num  : ");
     scanf("%f",&b);
     Add = a + b;
     Sub = a - b;
     Multi = a * b;
     Div = a/b;
     printf("\n Addition = %d\n Subtraction = %d\n Multiplication = %d\n Division = %.2f\n",Add,Sub,Multi,Div);
     return 0;
}