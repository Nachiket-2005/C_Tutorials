//#include<stdio.h>
//int main(){
//    int i,height,weight,count = 1;
//    for(i=0;i<5;i++){
//        printf("\n Enter details of person [%d] : ",i + 1);
//        printf("\n Enter height : ");
//        scanf("%d",&height);
//        printf("\n Enter weight : ");
//        scanf("%d",&weight);
//        if(height>170){
//            if(weight<50)
//        {
//        count ++ ;
//    printf("\n Total person having height>170 and weight<50 [%d] : ",count);
//        }
//        }
//        }
//        return 0;
//    
//}
#include<stdio.h>

int main() {
  int person, height, weight, count = 0;
  for (person = 0; person < 5; person++) {
    printf("\n Enter Detail of Person - %d", person + 1);
    printf("\n Enter Height : ");
    scanf("%d", & height);
    printf("\n Enter Weight : ");
    scanf("%d", & weight);
    if (height > 170) {
      if (weight < 50) {
        count++;
      }
    }
  }
  printf("\n Total Person having Height > 170 and Weight < 50 : %d", count);
  return 0;
}
