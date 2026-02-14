#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,si,ci;
    printf("enter the principle amount ");
    scanf("%f",&p);
    printf("enter the rate ");
    scanf("%f",&r);
    printf("enter the time ");
    scanf("%f",&t);
    si=(p*r*t)/100;
    float amount=p*pow((1+r/100),t);
    ci=amount-p;
    printf("the simple interest %f",si);
    printf("the compound interest %f",ci);
}