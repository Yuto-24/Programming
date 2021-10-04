#define _USE_MATH_DEFINES
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

// // a[n]の入力
// long long n;
// cin >> n;
// long long a[n];
// for(int i = 0; i < n ;i++){
// 	cin >> a[i];
// }

int main(int argc, char **argv) {
	int t;
	cin >> t;
	long long ans[t];
	for (int i = 0; i < t; i++) {
		long l, r;
		cin >> l >> r;

		long long a, b, c;
		for (int a = r; a <= l; a++) {
			long long temp = abs(r - 2l + 1);
			if (a % 2 == 0) {
				temp--;
			}
			ans[t] += temp;
		}

		if (r = l) {
			if (r != 0) {
				ans[t] = 0;
			} else {
				ans[t] = 1;
			}
		}
	}

	for (int i = 0; i < t; i++) {
		cout << ans[i] << "\n";
	}

	return 0;
}
