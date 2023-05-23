#include<stdio.h>

int main(){
    int no;

    printf("\n  Enter The No. : ");
    scanf("%d",&no);

    if(no==0){
        printf("\n Entered No is zero.");
    }
    else if(no>0){
        printf("\n Entered No  is Positive.");
    }
    else if(no<0){
        printf("\n Entered No is Nagetive.");
    }

    return 0;
}