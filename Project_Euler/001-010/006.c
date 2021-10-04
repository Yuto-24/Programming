#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n = 0;
int m = 0;
long long int sum_square = 0;
long long int sum_squares = 1;


void squares ()
{
    for (int j = m; j > 1; j--)
    {
        sum_squares = j * j + sum_squares;
    }
    printf("%lld\n",sum_squares);
}

void square ()
{
    while (n > 0)
    {
        sum_square = sum_square + n;
        n = n - 1;
    }
    sum_square = sum_square * sum_square;
    printf("%lld\n", sum_square);
}


int main ()
{
    printf("> ");
    scanf("%d", &n);
    m = n;
    square();
    squares();
    long long ans = sum_square - sum_squares;/* change */
    printf("%lld\n",ans);
    return 0;
}