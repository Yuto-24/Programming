#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

// コンパイル時に
// -lgmpxx -lgmp
// int => mpz_class

int num[110];
int frag[110];
void fx(int n, int k) {
	int i, f, j;
	for (i = 0; i < n; ++i) {
		f = frag[i];
		if (f == 0) {
			frag[i] = 1;
			num[k] = i + 1;
			if (k == 1) {
				for (j = n; j > 0; --j)
					printf("%4d", num[j]);
				printf("\n");
			} else {
				fx(n, k - 1);
			}
			frag[i] = 0;
		}
	}
}

int main() {
	int i, k;

	printf("人数：");
	scanf("%d", &k);
	if (k > 100 || k < 0) {
		printf("ERROR!\n");
		return 0;
	}
	for (i = 0; i < k; ++i) {
		num[i] = frag[i] = 0;
	}
	fx(k, k);
	return 0;
}