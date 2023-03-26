#include<stdio.h>

int getsum(int);

int main(){
    int n;
    printf("\n Enter Any Num. : ");
    scanf("%d",&n);
    printf("\n SUM is = %d",getsum(n));
    return 0;
}

int getsum(int n){
    return ((n*(n+1))/2);
}