#include <stdio.h>

int main(void)
{
    int amount, discount;
    printf("Please enter your purchase amount: ");
    scanf("%i", amount);
    if(amount <= 5000)
    {
        discount = amount * 0.05;
    }
    else if(amount <= 20000)
    {
            discount = (5000 * 0.05) + ((amount - 5000)*0.1);
    }
    else
    {
        discount = (5000 * 0.05) + (15000 * 0.1) + ((amount - 20000) * 0.2);
    }
    printf("Your discount: %i", discount);
    return 0;
}
