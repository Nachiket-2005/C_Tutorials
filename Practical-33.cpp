#include<stdio.h>
int main(){
    int i,a[10];

    for(i=0;i<9;i++){
        printf("\n Enter The No [%d] : ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<9;i++){
        if(a[i]%2==0){
            printf("\n %d is EVEN No.",a[i]);
        }
        else{
            printf("\n %d is ODD No.",a[i]);
        }
    }
    return 0;
}