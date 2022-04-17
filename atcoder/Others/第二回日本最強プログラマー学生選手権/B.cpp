#define _USE_MATH_DEFINES
#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <limits.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
using namespace std;

int compare_int(const void *a, const void *b) {
	return *(int *)a - *(int *)b;
}

int main(int argc, char **argv) {
	int n, m;
	int count;
	int count2 = 0;
	int a[1005];
	int b[1005];
	int c[2010];
	int ans[2020];

	// n, m, a, bの入力
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		c[i] = a[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> b[i];
		c[n + i] = b[i];
	}

	// cのサイズ = count
	count = n + m;
	// // cを出力
	// for (int i = 0; i < count; i++) {
	// 	cout << c[i] << " ";
	// }
	// cout << endl;

	// c をソート
	qsort(c, count, sizeof(int), compare_int);
	// cを出力
	// for (int i = 0; i < count; i++) {
	// 	cout << c[i] << " ";
	// }
	// cout << endl;

	// 重複削除
	for (int i = 0; i < count; i++) {
		if (c[i] == c[i + 1]) {
			i++;
		} else {
			ans[count2++] = c[i];
		}
	}

	// ansをソート
	qsort(ans, count2, sizeof(int), compare_int);

	// ansを出力
	for (int i = 0; i < count2; i++) {
		cout << ans[i] << " ";
	}
	cout << endl;

	return 0;
}
