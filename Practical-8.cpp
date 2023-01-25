#include<stdio.h>
int main(){
    int no;
    
    printf("\n Enter Any Number : ");
    scanf("%d",&no);
    
    if(no==0){
        printf("\n Entered No is Zero.");
    }
    else if(no > 0){
        printf("\n Entered No is Positive.");
    }
    else if(no < 0){
        printf("Entered No is Negative.");
    }
    return 0;
}