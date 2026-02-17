#include<stdio.h>
int main()
{
    int n;
    printf("enter the value ");
    scanf("%d",&n);
    int i;
    int f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("factorial n=%d",f);
    return 0;
}
