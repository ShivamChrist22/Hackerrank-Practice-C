#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int y;
    scanf("%d",&y);
            if(y>1918)
        {
         if  ((y%4==0) && (y%100!=0) || (y%400==0))

         printf("12.09.%d",y);
        else
        printf("13.09.%d",y);
        }
         if(y==1918)
          printf("26.09.%d",y);
        if(y<1918)
        {

         if  (y%4==0)

         printf("12.09.%d",y);
        else
       printf("13.09.%d",y); 
        }
}
