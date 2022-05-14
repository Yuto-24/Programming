#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a = 1;
int b = 1;
int c = 0;

int squaring(int n)
{
	n = n * n;
	return n;
}

int main()
{
	int x[3] = {0, 0, 0};
	long int product = 0;
	for (int a = 1; a < 500; a++)
	{
		for (int b = a; b < 500; b++)
		{
			c = 1000 - a - b;
			long int joudge = squaring(a) + squaring(b);
			printf("a = %d, b = %d, c = %d\n", a, b, c);
			if (joudge == squaring(c))
			{
				x[0] = a;
				x[1] = b;
				x[2] = c;
				goto FIN;
			}
		}
	}
	FIN:
	product = x[0]*x[1]*x[2];
	printf("product = %ld\n",product);
	printf("%d %d %d\n", x[0], x[1], x[2]);
	return 0;
}
