#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    printf(" enter the marks ");
    scanf("%d",&a);
    if(a>90 && a<100)
    {
        printf("grade A %d",a);
    
}
 if(a>80 && a<90)
    {
        printf("grade B %d",a);
    
}
 if(a>60 && a<80)
    {
        printf("grade C %d",a);
    
}
 if( a<60)
    {
        printf("grade D %d",a);
    
}
return 0;
}


