#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// mまでの素数を列挙
// from here

#define M 10000

int prime[M];
int n = 0;
int factor[2 * M][2 * M];
long long sum[3 * M];
long long ans = 0;

void MakePrimeList(int m) {
	prime[0] = 2;
	n = 1;
	for (int i = 3; i <= m; i++) {
		bool flag = true;
		for (int k = 0; k < n; k++) {
			if (i % prime[k] == 0) {
				flag = false;
				break;
			}
		}
		if (flag) {
			prime[n] = i;
			n++;
		}
	}
}
// to here

// m の約数を factor[m][l]に入れる
void SumDivisor(int m) {
	for (int i = 1; i <= m / 2; i++) {
		if (m % i == 0) {
			sum[m] += i;
		}
	}
}

void FillZero() {
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < M; j++) {
			factor[i][j] = 0;
		}
		sum[i] = 0;
	}
}

// void SumFactor() {
//     for (int i = 0; i < M; i++) {
//         for (int j = 0; j < M; j++) {
//             while (factor[i][j] > 0) {
//                 sum[i] += factor[i][j];
//             }
//         }
//     }
// }

// bool IsAmicableNumbers(int n, int m) {
//     return (n != sum[n] && n == sum[m] && m == sum[n]);
// }

bool IsAmicableNumbers(int n) {
	// printf("n: %d sum: %lld sumsum: %lld\n",n,sum[n],sum[sum[n]]);
	return (n != sum[n] && n == sum[sum[n]]);
}

int main() {
	// factor, sum の初期化
	FillZero();
	memset(factor, 0, sizeof(factor));
	// 素数リストの作成
	MakePrimeList(sqrt(M));
	for (int i = 0; i < M; i++) {
		SumDivisor(i);
	}
	printf("220: %lld\n", sum[20000]);

	for (int i = 0; i < M; i++) {
		if (IsAmicableNumbers(i)) {
			ans += i;
			printf("Amicavle: %d\n", i);
		}
	}

	// for (int i = 0; i < M; i++) {
	//     for (int j = 0; j < M; j++) {
	//         if (IsAmicableNumbers(i, j)) {
	//             ans += i;
	//             printf("i: %d j: %d\n",i,j);
	//         }
	//     }
	// }

	printf("ans: %lld\n", ans);

	return 0;
}