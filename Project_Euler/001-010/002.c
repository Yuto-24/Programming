#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* void fibonacci(){
    int sum;
    int j;
    int a = 0;
    for (int i = 1; i < 4000000; i = i )
    {
        j = i;
        i = i + a;
        a = j;
        if ( i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
} */


int main(){
    int sum = 0;
    int j = 0;
    int a = 0;
    for (int i = 1; i < 4000000; i = i )
    {
        j = i;
        i = i + a;
        a = j;
        if ( i % 2 == 0)
        {
            sum = sum + i;
        }
    }
    printf("%d\n", sum);
    return 0;
}
