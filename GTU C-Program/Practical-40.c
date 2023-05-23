#include<stdio.h>

int main()
{
char str[50],rev[50];
int i,j;
printf("\n  Enter String to Reverse : ");
scanf("%[^\n]s",str);

for(i=0;str[i]!='\0';i++)
{
 
}
i--;

for(j=0;i>=0;j++,i--)
{
 rev[j]=str[i];
}
rev[j]='\0';

printf("\n Reverse String = %s",rev);
return 0;
}