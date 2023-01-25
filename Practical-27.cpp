#include<stdio.h>
int main(){
    int i,j,n,fact = 1;
    float sum = 0;

        printf("\n Enter The No. : ");
        scanf("%d",&n);
        for(i=1;i<=n;i++){
        fact = 1;
            for(j=i;j>0;j--){
            fact = fact * j;
        }
        sum = sum + (1.0/fact);
        }
        
        printf("\n Sum of series is = %f",sum);
        
        return 0;
}