#include<stdio.h>
int main(){
    int marks;
    printf("\n Enter Your Marks between 0 - 100 : ");
    scanf("%d",&marks);
    if(marks>100 || marks <0){
        printf("\n Your Input is out of Range.");
    }
    else if(marks>=80){
        printf("\n You got distinction.");
    }
    else if(marks>=60){
        printf("\n You got first class.");
    }
    else if(marks>=40){
        printf("\n You got second class.");
    }
    else{
        printf("\n Sorry...! You are Fail.");
    }
    return 0;
}