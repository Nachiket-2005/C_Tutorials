#include<stdio.h>
int main(){
   int no,i;
   printf("\n Enter The No. : ");
   scanf("%d",&no);
   for(i=2;i<no;i++)
   {
       if(no % i == 0){
           printf("\n %d is not PRIME NO:)",no);
				break;
       }
   }
       if(no == i){
           printf("\n %d is PRIME NO:)",no);
       }
  return 0;}
