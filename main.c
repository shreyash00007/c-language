#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 30;
    int *pAge = &age;

    printf("%d", *pAge); //You can deferencing bu * "&" *"" &
    return 0;
}
