#include<stdio.h>

int main(){
    int a,b,c;
    printf("\n Enter The First No : ");
    scanf("%d",&a);
    printf("\n Enter The Second No : ");
    scanf("%d",&b);
    printf("\n Enter The Third No : ");
    scanf("%d",&c);

   if(a>b){
    if(a>c){
        printf("\n %d is Max.",a);
    }
    else{
        printf("\n %d is Max.",c);
    }
    } else { 
    if(b>c){
        printf("\n %d is Max.",b);
    }
    else{
        printf("\n %d is Max.",c);
    }
    }
    return 0;
   }