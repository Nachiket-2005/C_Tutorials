#include<stdio.h>
int main(){
    int a,b,c;
    
    printf("\n Enter first No. : ");
    scanf("%d",&a);
    printf("\n Enter Second No. : ");
    scanf("%d",&b);
    printf("\n Enter Third No. : ");
    scanf("%d",&c);
    
    if(a>b){
        if(a>c)
    printf("\n First No %d is max.",a);
    
        else{
            printf("\\n Third No %d is max",c);
        }
 } else{
    if(b>c){
        printf("\n Second No %d is max.",b);
    } else {
        printf("\n Third No %d is max.",c);
    }
    
    return 0;
 }
}