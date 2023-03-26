#include<stdio.h>

int main(){
    char ch;

    printf("\n Enter Any Characters : ");
    scanf("%c",&ch);
    if(ch>='0'&&ch<='9'){
        printf("\n Entered Character is Digit.");
    }
    else if(ch>='A'&&ch<='Z'){
        printf("\n Entered Character is Capital Letter.");
    }
    else if(ch>='a'&&ch<='z'){
        printf("\n Entered Chaarater is Small Letter.");
    }
    else {
        printf("\n Entered Character is Special Symbol.");
    }
    return 0;
}