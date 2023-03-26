#include<stdio.h>

int main(){
    int marks;
    printf("\n Enter Your Marks between 0 - 70 : ");
    scanf("%d",&marks);

    if(marks>=23){
        printf("\n Cogratulations...!! You're Pass. ");
    }
    else if(marks<23){
        printf("\n Sorry...!! You're Fail.");
    }
    return 0;
}