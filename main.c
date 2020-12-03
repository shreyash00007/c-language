/**#include <stdio.h>
#include <stdlib.h>

int maxi(int num1,int num2)
{
    int result;

    if(num1 > num2)
        {
        result = num1;
        }
        else {
            result = num2;
        }

    return result;
}


int main()
{
    printf("Answer is :- %d", maxi(10,20));
    return 0;
}
*/


/**#include <stdio.h>

int maxi(int num1, int num2, int num3)
{
    int result;

    if(num1 >= num2 && num1 >= num3){
            result = num1;
    }
    else if( num2 >= num1 && num2 >= num3){
        result = num2;
    }
    else{
        result = num3;
    }

    return result;

}


int main (){
  printf("%d", maxi(12,24,54));
  return 0;
}
*/
