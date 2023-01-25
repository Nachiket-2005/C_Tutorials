#include<stdio.h>
int main(){
    int i,j;

    for(i=0;i<5;i++){
        for(j=0;j<5-i;j++){
            printf("%c",'A' + i);               //pattern 1
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
            printf("%c",'A'+j);                 //pattern 2
        }
        printf("\n");
    }
    return 0;
}