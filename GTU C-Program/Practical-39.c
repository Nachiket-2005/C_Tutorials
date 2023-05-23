#include<stdio.h>
#include<stdlib.h>

int main()
{
char str[50],ch;
int i,j;
printf("\n  Enter String : ");
scanf("%[^\n]s",str);
fflush(stdin);
printf("\n Enter Character to Delete : ");
scanf("%c",&ch);
for(i=0;str[i]!='\0';i++)
{
 if(str[i]==ch)
 {
  for(j=i;j<str[j]!='\0';j++)
  {
   str[j]=str[j+1];
  }
   i--;
 }
}
printf("\n Final String = %s",str);
return 0;
}
