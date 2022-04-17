#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	long long int n = 600851475143;
	int a = 0;
	int m = sqrt(n);
	for (int i = 2; i <= m; i++)
	{
		if (n % i == 0)
		{
			printf("n= %I64d, i= %d\n", n, i);
			while (n % i == 0)
			{
				n = n / i;
				printf("n= %I64d\n", n);
				a = i;
			}
		}
	}
	printf("%d\n", a);
	return 0;
}

/* int main()
{
	long long int n = 600851475143;
	int a = 0;
	double m = sqrt(n);
	for (int i = 3; i < m; i = i + 2)
	{
		if (n % i == 0)
		{
			printf("n(before)= %I64d\ni= %d\n", n, i);
			n = n/i;
			printf("n(after)= %I64d\n\n", n);
			a = i;
		}
	}
	printf("%d\n", a);
	return 0;
} */