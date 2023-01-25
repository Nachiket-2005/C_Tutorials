#include<stdio.h>
int main(){
    int a,b;
    printf("\n Enter first No. : ");
    scanf("%d",&a);
    printf("\n Enter second No. : ");
    scanf("%d",&b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\n After Interchange value a : %d  b : %d ",a,b);
    return 0;

}