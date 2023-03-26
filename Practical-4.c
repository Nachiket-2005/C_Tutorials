#include<stdio.h>

int main(){
    int a,b;

    printf("\n Enter First No : ");
    scanf("%d",&a);
    printf("\n Enter Second No : ");
    scanf("%d",&b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\n After Interchange No : a = %d\t b = %d",a,b);
    return 0;
}