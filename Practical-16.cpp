#include<stdio.h>
int main(){
    int i;
    printf("\n Enter Any Number : ");
    scanf("%d",&i);
    if((i%10)%2==0){
        printf("\n Entered No of last digit is Even.");
    }
    else{
        printf("\n Entered No of last digit is Odd.");
    }
    return 0;
}