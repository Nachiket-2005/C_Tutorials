#include<stdio.h>
int  main(){
    int i,j;

    for(i=0;i<=5;i++){
        for(j=0;j<=i;j++){          //Pattern 1
        printf(" *");
    }
    printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int i,j;

    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
        printf(" ");
    }
    for(j=0;j<=i;j++){              //Pattern 2        
        printf(" *");
    }
    printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int i,j;

    for(i=0;i<5;i++){
        for(j=0;j<i;j++){
            printf(" ");           //Pattern 3
        }
        for(j=i;j<5;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}