#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    int balance;
    printf("Please enter your balance:");
    scanf("%i", &balance);
    int totalBalance = balance + (balance * .1);
    printf("Balance after one year : %i", totalBalance);
    return 0;
}*/
/*
int main()
{
    int balance;
    printf("Please enter your balance:");
    scanf("%i", &balance);
    int afterOneYear = balance + (balance * .1);
    int finalBalanace = afterOneYear + (afterOneYear + .1);
    printf("Balance after one year : %i", finalBalanace);
    return 0;
}
*/
int main()
{
    int balance, year;
    printf("Please enter your balance and year:- ");
    scanf("%i %i", &balance, &year);
    for(int i=1; i<=year; i++)
    {
        balance = balance +(balance * .1);
    }
    printf("Balance after %i years is: %i", year, balance);
    return 0;
}
