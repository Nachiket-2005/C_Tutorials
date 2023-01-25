#include<stdio.h>
int main(){
    int p,r,n;
    float I;
    
    
    printf("\n Enter amount : ");
    scanf("%d",&p);
    printf("\n Enter No of Years : ");
    scanf("%d",&n);
    printf("\n Enter The Rate of Interest : ");
    scanf("%d",&r);
    
    I = (p * r * n)/100;
    
    printf("\n Interest is = %.2f",I);
    
    return 0;
}