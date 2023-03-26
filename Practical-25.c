#include<stdio.h>
int main(){
    int i,n,sum = 0;
    printf("\n Enter The No. : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum = sum + (i*i);
    }
    printf("\n sum of series is : %d",sum);
    return 0;
}