#include<stdio.h>

int main(){
    char str[50],ch1,ch2;
    int i;

    printf("Enter String : ");
    scanf("%[^\n]s",str);
    fflush(stdin);

    printf("Enter Character to Find : ");
    scanf("%c",&ch1);
    fflush(stdin);

    printf("Enter Character to replace : ");
    scanf("%c",&ch2);

    for(int i=0;str[i]!='\0';i++){
        if(str[i]==ch1){
            str[i] = ch2;
        }
    }
    printf("Final String = %s",str);
    return 0;
}