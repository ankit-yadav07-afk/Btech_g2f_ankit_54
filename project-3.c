#include<stdio.h>
#include<math.h>
int main()
{
    float r,area,perimeter;
    printf("enter the raidus");
    scanf("%f",&r);
    float pie =3.14;
    area=pie*r*r;
    perimeter=2*pie*r;
    printf("the area of circle %f",area);
    printf("\n the perimeter of circle %f",perimeter);
    return 1;



}