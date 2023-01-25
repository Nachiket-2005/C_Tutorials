#include<stdio.h>
int main(){
    int no,sum = 0, i = 0,val;
   
    printf("\n How many Number you want to Enter : ");
    scanf("%d",&no);
   
    while(i<no){
        printf("\n Enter The No [%d] : ",i+1);
        scanf("%d",&val);
        sum = sum + val ;
        i++;
    }
   
    printf("\n Sum is = %d ", sum);
    printf("\n Sum is = %.2f ",((float)sum/no));
   
    return 0;
}