#include <stdio.h>
#include <stdlib.h>

int main()
{
    char color[20];
    char pluralNoun[20];
    char celebrity[20];

    printf("Enter the Color:- ");
    scanf("%s",color);
    printf("Enter the Plural-noun:- ");
    scanf("%s",pluralNoun);
    printf("Enter the celebrity:- ");
    scanf("%s",celebrity);

    printf("Roses are %s\n",color);
    printf("%s are blue\n",pluralNoun);
    printf("I love %s\n",celebrity);
    return 0;
}
