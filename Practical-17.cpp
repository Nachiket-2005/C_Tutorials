#include<stdio.h>
int main()
{
    int no, Factorial =1;
    printf("\n Enter The No. of its Find The Factorial : ");
    scanf("%d",&no);

    while(no>1){
        Factorial = Factorial * no;
        no = no - 1;
    }
    printf("\n Entered no of its Factorial is : %d",Factorial);
    return 0;
}