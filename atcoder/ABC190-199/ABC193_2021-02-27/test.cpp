#define _USE_MATH_DEFINES
#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
using namespace std;

// printf("%d\n", x); =>
// cout << x << "\n";

// scanf("%d", &x); =>
// cin >> x;

// int compare_int(const void *a, const void *b) {
// 	return *(int *)a - *(int *)b;
// }

int main() {
	long long n;
	cin >> n;

	long long check[n];

	long count = 0;

	for (int a = 2; a < n; a++) {
		// aを平方数以外に限る
		for (int i = 2; i * i < a; i++) {
			if (a % i * i != 0) {
				break;
			}
		}
		for (int b = 2; b < n; b++) {
			// pow(a, b)がn以下かチェック
			if (pow(a, b) <= n) {
				// 重複チェック
				int pin = 0;
				for (int j = 0; j < count; j++) {
					if (pin != 1 && pow(a, b) == check[j]) {
						pin = 1;
						break;
					}
				}
				if (pin == 0) {
					count++;
					check[count] = pow(a, b);
				}

				cout << a << " " << b << "\n";
			}
			if (pow(a, b) > n) {
				break;
			}
		}
	}

	// qsort(check, i, sizeof(int), compare_int);
	// for (int j = 0; j < i; j++) {
	// 	if (check[j] != 0 && check[j] == check[j + 1]) {
	// 		count--;
	// 	}
	// }
	// for (int j = 0; j < i; j++) {
	// 	cout << check[j] << " ";
	// }
	// cout << "\n";

	cout << n - count << "\n";

	return 0;
}