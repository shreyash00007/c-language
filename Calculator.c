/**#include <stdio.h>
#include <stdlib.h>

int cal(int num1 ,int num2 )
{
    int result;
    printf("Choose the operation: - \n 1) Addition \n 2) Subtraction \n 3) Multiplication \n 4) Division");
    scanf("%d",1,2,3,4);
    printf("Enter the first no:-");
    scanf("%d",num1);
    printf("Enter the second no:-");

    if(1){
        result = num1 + num2;
    } else if(2){
        result = num1 - num2;

    }
    else if(3){
        result = num1 * num2;

    }
    else {
        result = num1 / num2;
    }

    return result;
}

int main()
{
    printf("Welcome to the C calculator \n",cal(2,3));

    return 0;
}
*/
#include <stdio.h>

int main()
{

    int num1;
    int num2;
    char op;
    printf("Choose the operation :- \n 1)Addtion(+) \n 2)Subtraction(-) \n 3)Multiplication(*) \n 4)division(/) \n ");
    scanf("%c", &op);
    printf("Enter the first no :-");
    scanf("%d", &num1);
    printf("Enter the second no :-");
    scanf("%d", &num2);

            if (op == '+'){
             printf("%d",num1 + num2);
             }
            else if(op == '-'){
            printf("%d", num1 - num2);
            }
            else if(op == '*'){
            printf("%d", num1 * num2);
             }
             else if(op == '/'){
            printf("%d", num1 / num2);
            }
            else{
            printf("Invalid Operator");
            }
}
