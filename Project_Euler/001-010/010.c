#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// nが素数かどうかの判定
bool isprime(int n)
{
	for (int m = 2; m * m <= n; m++)
	{
		if (n % m == 0){return false;}
	}
	return true;
}

int main()
{
	long long int sum = 0;
	for (int i = 2; i < 2000000 ; i++)
	{
		if (isprime(i))
		{
			sum = sum + i;
			printf("No.%d, nqiiv = %lld\n",i,sum);
		}
	}
	return 0;
}
