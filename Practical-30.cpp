#include<stdio.h>
int main(){
    int i,j;

    for(i=0;i<5;i++){
        for(j=0;j<=i;j++){
            printf("%d",j+1);               //Pattern 1
        }
        printf("\n");
    }   
    return 0; 
    }
#include<stdio.h>
int main(){
    int i,j;

    for(i=0;i<5;i++){
        for(j=0;j<5-i;j++){
            printf("%d",j+1);               //Pattern 2
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int i,j;

    for(i=0;i<5;i++){
        for(j=0;j<5-i;j++){
            printf("%d",5-i);               //Pattern 3
        }
        printf("\n");
    }
    return 0;
}