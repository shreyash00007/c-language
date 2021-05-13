#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 12 , b = 24;
    printf("AND %d",a&b);
    printf("\nOR %d",a|b);
    printf("\nNOT%d",~a,~b);
    printf("%d\nLeft shift-",a<<2);
    printf("%d\nRight shift-",b>>2);
    printf("%d\nXOR-",a^b);
    return 0;
}
