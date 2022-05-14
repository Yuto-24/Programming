#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 10000
#define M 20

int main() {
	char names[N][M];
	int n = 0;

	// 0-fill
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			names[i][j] = '\0';
		}
	}

	// データの読み込み (n個のデータ)
	while (scanf("%s", names[n]) != EOF) {
		n++;
	}

	// // データの確認
	// printf("====input====\n");
	// printf("No.%04d: %s\n", 1, names[0]);
	// printf("No.%04d: %s\n", n, names[n - 1]);

	// SORT1
	// for (int i = M - 1; i >= 0; i--) {
	// 	for (int j = 1; j < n - 1; j++) {
	// 		for (int k = n - 1; k >= j; k--) {
	// 			if (names[k - 1][i] > names[k][i]) {
	// 				// 入れ替え
	// 				char tmp[M];
	// 				// tmp に names をコピー
	// 				strcpy(tmp, names[k - 1]);
	// 				strcpy(names[k - 1], names[k]);
	// 				strcpy(names[k], tmp);
	// 			}
	// 		}
	// 	}
	// }

	// // SORT2
	for (int i = 1; i <= n - 1; i++) {
		for (int j = n - 1; j >= i; j--) {
			if (strcmp(names[j - 1], names[j]) > 0) {
				// 入れ替え
				char tmp[M];
				// tmp に names をコピー
				strcpy(tmp, names[j - 1]);
				strcpy(names[j - 1], names[j]);
				strcpy(names[j], tmp);
			}
		}
	}

	// データの確認
	printf("====output====\n");
	// printf("No.%04d: %s\n", 1, names[0]);
	// printf("No.%04d: %s\n", 938, names[937]);
	// printf("No.%04d: %s\n", n, names[n - 1]);

	// 最後の計算スタート
	long long value[N];
	int m[N];
	for (int i = 0; i < n; i++) {
		m[i] = strlen(names[i]);
	}

	// A のASCII(各アルファベットの重み計算用)
	char a = 'A'; // ASCII:65
	(int)a--;	  // A = 1番目にしたい
	int a_num = (int)a;

	// アルファベットの和
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m[i]; j++) {
			value[i] += (long long)names[i][j] - a_num;
		}
		value[i] *= (i + 1);
	}

	// printf("\n====途中計算====\n");
	long long ans = 0;
	for (int i = 0; i < n; i++) {
		ans += value[i];
		// printf("to%04d, ans: %lld\n",i + 1,ans);
	}

	for (int i = 0; i < n; i++) {
		printf("%s\n", names[i]);
	}

	printf("\n====ANSWER====\n");
	printf("No.%04d: %s\n", 1, names[0]);
	printf("No.%04d: %lld\n", 1, value[0]);
	printf("No.%04d: %s\n", 938, names[937]);
	printf("No.%04d: %lld\n", 938, value[937]);
	printf("No.%04d: %s\n", n, names[n - 1]);
	printf("No.%04d: %lld\n", n, value[n - 1]);
	printf("\nans: %lld\n", ans);

	return 0;
}
