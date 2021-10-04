#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <gmpxx.h>

mpz_class bikkuri(int n)
{
	mpz_class m = 1;
	for (int i = 2; i <= n; i++)
	{
		m = m * i;
		// printf("i:%d, m:%lld\n",i,m);
		std::cout << i << " " << m << "\n";
	}	
	return m;
}

int main () {
	int n = 0;
	mpz_class ans = 0;
	printf("how> ");
	scanf("%d", &n);
	ans = bikkuri(2 * n) / (bikkuri(n) * bikkuri(n));
	// printf("ans:%lld",ans);
	std::cout << ans << "\n";
	return 0;
}