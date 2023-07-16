#define _USE_MATH_DEFINES
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/times.h> // 構造体tmsを使うために必要.
#include <time.h>
#include <unistd.h>

int main(int argc, char **argv) {
	// 入力
	int n;
	scanf("%d", &n);

	int t = pow(2, n);
	long a[t + 5];

	for (int i = 0; i < t; i++) {
		scanf("%ld", &a[i]);
	}
	// for (int i = 0; i < t; i++) {
	// 	printf("%ld ", a[i]);
	// }
	// printf("\n\n");

	// アルゴリズム
	// 準決まで繰り返し
	for (int i = 0; i < n - 1; i++) {
		// 対決前者決定
		for (int j = 0; j < t; j++) {
			if (a[j] != 0) {
				// 対決後者決定
				for (int k = j + 1; k < t; k++) {
					if (a[k] != 0) {
						// printf("j: %d, k: %d\n", j, k);
						// 対戦
						if (a[j] < a[k]) {
							a[j] = 0;
						} else {
							a[k] = 0;
						}
						// 次の対戦者に進む
						j = k;
						break;
					}
				}
			}
		}
		// printf("\ni: %d\n", i);
		// for (int i = 0; i < t; i++) {
		// 	printf("%ld ", a[i]);
		// }
		// printf("\n\n");
	}

	// for (int i = 0; i < t; i++) {
	// 	printf("%ld ", a[i]);
	// }
	// printf("\n\n");

	// 決勝
	// 対決前者決定
	for (int j = 0; j < t; j++) {
		if (a[j] != 0) {
			// 対決後者決定
			for (int k = j + 1; k < t; k++) {
				if (a[k] != 0) {
					// 対戦
					if (a[j] < a[k]) {
						printf("%d\n", j + 1);
					} else {
						printf("%d\n", k + 1);
					}
				}
			}
		}
	}

	return 0;
}
