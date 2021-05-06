#include <stdio.h>
#include <stdlib.h>
/*
int main(void)
{
    char ch;
    printf("Please enter a letter:");
    scanf("%c", &ch);
    int ascii = ch;
    if (ascii == 65 || ascii == 69 || ascii == 73 || ascii == 79 || ascii == 85)
        printf("vowel");
    else if (ascii == 97 || ascii == 101  || ascii == 105 || ascii == 111 || ascii == 177)
        printf("Vowel");
    else if ((ascii >= 65 && ascii <= 90) || (ascii >= 97 && ascii <= 122))
        printf("Constant");
    else
        printf("Invalid input");
    return 0;
}
*/
int main(viod)
{

    char ch;
    printf("Please enter a letter:");
    scanf("%c", &ch);
    int ascii = ch;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ascii == 'u')
        printf("Vowel");
    else if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            printf("Vowel");
    else if((ascii >= 65 && ascii <= 90) || (ascii >= 97 && ascii <= 122))
        printf("Constant");
    else
        printf("Invalid input");
    return 0;
}
