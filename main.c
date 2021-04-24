#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    printf("Please enter two integers :-");
    scanf("%i%i", &n1, &n2);
    printf("Summation:- %i\n", n1 + n2);
    printf("Multiplication:- %i\n", n1 * n2);
    printf("Subtraction:- %i\n", n1 - n2);
    printf("Division:- %i\n", n1 / n2);
    return 0;
}
