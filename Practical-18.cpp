#include<stdio.h>
int main(){
    int no, revno = 0;
    printf("\n Enter The No To Make it Reverse  : ");
    scanf("%d",&no);

    while(no>0){
        revno = (revno * 10) +  (no % 10);
        no = no/10;
    }
    printf("\n Reverse no of Entered No is : %d",revno);
    return 0;
}