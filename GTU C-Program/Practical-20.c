#include<stdio.h>
int main(){
    int no,sum=0;
    printf("\n Enter The No. : ");
    scanf("%d",&no);
    if(no<10){
        sum = sum + (no * 2);
    }
    else{
        sum = sum + (no % 10);
    }
    while(no>9){
        no = no/10;
    }
    sum = sum + no;
    printf("\n Sum of first & Last Digit is : %d",sum);
    return 0;
}