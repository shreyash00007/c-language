#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Please enter a number:");
    scanf("%i", &n);
    for(int i=1; i<=n; i++)
    {
        if(i%2==0)
            printf("%i\n", i);
    }
    return 0;
}
