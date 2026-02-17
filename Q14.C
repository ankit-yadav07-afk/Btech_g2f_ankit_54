#include <stdio.h>
int main()
{
    int n;
    int sumeven;
    printf("enter the value");
    scanf("%d",&n);
    int i;
    sumeven=0;
    for(i=1;i<=n;i++)
    {
        if(i%2==0){
        sumeven=sumeven+i;
    }
        
    }
    printf("sum of all even number n=%d",sumeven);
    return 0;
}
