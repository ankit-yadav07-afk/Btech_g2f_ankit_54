

// no correct
#include<stdio.h>
#include<math.h>
int main()
{
    char op;
    int a,b;
    printf("enter an operator (+,-,/,*,%) \n");
    scanf("%c",&op);
    printf("enter the two any value \n");
    scanf("%d%d",&a,&b);

    switch (op)
    {
    case '+':
        printf("\n addition =%d",(a+b));
        /* code */
        break;

    case '-':
        printf("\n subtraction =%d",(a-b));
        /* code */
        break;
    case '*':
        printf("\n multiplication =%d",(a*b));
        /* code */
        break;
    case '/':
        printf("\n division =%d",(a/b));
        /* code */
        break;

    case '%':
        printf("\n remainder =%d",(a%b));
        /* code */
        break;
    default: 
         printf("\n enter correct operator");
        break;
    }
    return 0;
}
