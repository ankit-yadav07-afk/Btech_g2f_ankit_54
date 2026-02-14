#include <stdio.h>
#include <math.h>
int main()
{
    int year;
    printf("enter the year of ");
    scanf("%d",&year);
    // printf("enter the value of b");
    // scanf("%d",&b);
    // printf("enter the value of c");
    //  scanf("%d",&c);
    if( year%4==0)
    {
        printf(" this is leap year "); }
        else {
            printf("this is not leap year ");
        }
        return 0;
}
