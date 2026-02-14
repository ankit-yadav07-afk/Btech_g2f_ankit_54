#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("enter the two variables \n");
    scanf("%d",a);
    scanf("%d",b);
    c=a;
    a=b;
    b=c;
    printf("\n after swap \n");
    printf(" a=%d \t b= %d", a,b);
    return 0;

}