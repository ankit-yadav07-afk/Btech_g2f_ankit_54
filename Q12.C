#include <stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int sum;
    sum=0;
    int i;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
       printf("sum of all the value n= %d",sum);
        return 0;
    }
