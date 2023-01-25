#include<stdio.h>
int main(){
    int marks;
    
    printf("\n Enter Your marks between 0-70 : ");
    scanf("%d",&marks);
    
    if(marks>=23){
        printf("\n Congratulations...! You are Pass.");
    }
    else{
        printf("\n Sorry...! You are Fail.");
    }
    return 0;
}