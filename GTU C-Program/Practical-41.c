#include<stdio.h>

int main()
{
char str[50];
int i;
printf("\n  Enter String : ");
scanf("%[^\n]s",str);

for(i=0;str[i]!='\0';i++)
{
 if(str[i]>='a' && str[i]<='z')
 {
  str[i]=str[i]-32;
 }
}
printf("\n Upper Case String = %s",str);
return 0;
}