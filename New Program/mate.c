#include<stdio.h>
int main(){
    int i,j,n=20;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==n/2+1||j==n/2+1||(i==1&&j>=(n/2+1)&&(j<=n))||(j==1&&i<=(n/2+1)&&(i>=1))||(i==n&&j>=1&&j<=n/2+1)||(j==n&&i>=n/2+1&&i<=n))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}