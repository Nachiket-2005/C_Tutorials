#include<stdio.h>

int main(){
  int a[10],i,max,min;
  for(i=0;i<10;i++){
  printf("\n Enter Integer No. [%d] : ",i+1);
  scanf("%d",a[i]);
    if(i==a[i]){
      min = max = a[i];
    }
    else{
      if(min > a[i]){
        min = a[i];
      }
      if(max < a[i]){
        max = a[i];
      }
    }
  }
  printf("\n Minimum = %d",min);
  printf("\n Maximum = %d",max);
  return 0;
}