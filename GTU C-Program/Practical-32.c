#include<stdio.h>
int main(){
    int rollno[5],marks[5],i;
    for(i=0;i<5;i++){

    printf("\n Enter student of roll no [%d] : ",i+1);
    scanf("%d",&rollno[i]);
    printf("\n Enter student of marks [%d] : ",i+i);
    scanf("%d",&marks[i]);
    }
    
    for(i=0;i<5;i++)
    
    {
        printf("\n rollno = %d\n marks = %d\n",rollno[i],marks[i]);
    }
    
    return 0;
}