#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p, q, r;
    char a, b, c, d, oper;
    printf("Please select a operation \n a)Addition \n b)Subtraction \n c)Division \n d)Multiplication \n -");
    scanf("%c",&oper);
    if(oper == 'a')
        {
        printf("Enter two numbers to add -");
        scanf("%d%d", &p,&q);
        r = p + q;
        printf("The addition of numbers is :- %i",r);
    }
    else if(oper == 'b')
        {
        printf("Enter two numbers to sub -");
        scanf("%d%d", &p,&q);
        r = p - q;
        printf("The subtraction of numbers is :- %i",r);
     }
    else if(oper == 'c')
    {
        printf("Enter two numbers for Division -");
        scanf("%d%d", &p,&q);
        r = p / q;
        printf("The Division of numbers is :- %i",r);
     }
    else if(oper == 'd')
    {
        printf("Enter two numbers to Multiply -");
        scanf("%d%d", &p,&q);
        r = p * q;
        printf("The Multiplication of numbers is :- %i",r);
    }
    else
    {
        printf("Invalid Input");
    }
        return 0;
}
