#include<stdio.h>
int main(){
    int n,i,max,a[50];

    printf("\n How many number you want to enter max[50] : ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("\n Enter The No. [%d] : ",i+1);
        scanf("%d",&a[i]);
        if(i==0){
            max = a[i];
        } else {
            if(max<a[i]){
                max = a[i];
            }
        }
    }
    printf("\n Maximum value in array : %d",max);
    return 0;
    
}