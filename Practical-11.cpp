#include<stdio.h>
int main(){
    char ch;
    printf("\n Enter Any Character : ");
    scanf("%c",&ch);
    if(ch>='0' && ch<='9'){
        printf("\n Entered Character is digit.");
    }
    else if (ch>='A' && ch<='Z'){
        printf("\n Entered Characater is Capital Latter.");
    }
    else if(ch>'a' && ch<='z'){
        printf("\n Entered charcater is Small Letter.");
    }
    else{
        printf("\n Entered character is Special character.");
    }
    return 0;
}