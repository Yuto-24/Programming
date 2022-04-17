#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int max_i = 0;
int max_j = 0;
int max = 0;
int product = 0;
int i = 0;
int j = 0;

int re_nomber(int number)
{
    int reverse = 0;
    while (number > 0)
    {
        reverse = reverse * 10 + number % 10;
        number /= 10;
    }
    return reverse;
}

void make_palindrome()
{
    for (i = 100; i < 1000; i++)
    {
        for (j = 100; j < 1000; j++)
        {
            product = i * j;
            if (product == re_nomber(product) && product > max)
            {
                max_i = i;
                max_j = j;
                max = product;
            }
        }
    }
    printf("i = %d\nj = %d\nanswer = %d", max_i, max_j, max);
}

int main()
{
    make_palindrome();
}