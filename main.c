#include <stdio.h>
#include <stdlib.h>

int main()
{
   for(int i = 1; i <= 3; i++){
    if(i == 2){
        continue;
    }
    printf("%i\n",i);
   }
    return 0;
}
