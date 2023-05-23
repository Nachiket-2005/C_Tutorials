#include<stdio.h>
#include<math.h>
int main(){
    
    int n,i;
    float sum = 0,sum1 = 0,sum2 = 1,a[50];

    printf("\n How many number you want to enter : ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        
        printf("\n Enter The No. [%d] : ",i+1);
        scanf("%f",&a[i]);
    
    sum = sum + a[i];
    sum1 = sum1 + (1.0/a[i]);
    sum2 = sum2 * a[i];
    }
        printf("\n Average Mean: %f",sum/n);
        printf("\n Geometric Mean: %f",pow(sum2,(1.0/n)));
        printf("\n Harmonic Mean: %f",n * pow(sum1,-1));
    return 0;
}