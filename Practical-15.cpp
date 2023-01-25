// #include<stdio.h>
// int main(){
//     int a[10],i,max,min;
//     for(i=0;i<10;i++){
//     printf("\n Enter The No. [%d] : ",i+1);
//     scanf("%d",&a[i]);
//     if(i==0){
//     a[i]=max=min;       
//     }else{ if(min>a[i]){
//         a[i]=min;
//     }
//     if(max<a[i]){
//         a[i]=max;
//     }
//     }
//     }
    
//     printf("\n Minimum No. : %d",min);
//     printf("\n Maximum No. : %d",max);
//     return 0;
    
// }
#include <stdio.h>

int main() {
  int a[10], i, min, max;
  for (i = 0; i < 10; i++) {
    printf("\n Enter Interger Value [%d] : ", i + 1);
    scanf("%d", & a[i]);
    if (i == 0) {
      min = max = a[i];
    } else {
      if (min > a[i]) {
        min = a[i];
      }
      if (max < a[i]) {
        max = a[i];
      }
    }
  }
  printf("\n Minimum : %d", min);
  printf("\n Maximum : %d", max);
  return 0;
}