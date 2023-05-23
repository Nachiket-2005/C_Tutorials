#include<stdio.h>
void swap(int *, int *);

int main()
{
int i=5,j=8;
printf("\n Values Before Exchange :");
printf("\n i = %d  j = %d",i,j);
swap(&i,&j);
printf("\n Values After Exchange :");
printf("\n i = %d  j = %d",i,j);
return 0;
}

void swap(int *a,int *b)
{
 *a = *a + *b;
 *b = *a - *b;
 *a = *a - *b;
}