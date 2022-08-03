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

int main(int argc, char **argv) {
	int n;
	cin >> n;
	int a[n], b[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}

	int maxa = 0, minb = 9999;
	for (int i = 0; i < n; i++) {
		if (a[i] > maxa) {
			maxa = a[i];
		}
		if (b[i] < minb) {
			minb = b[i];
		}
	}

	long ans = minb - maxa + 1;
	if (ans < 0) {
		ans = 0;
	}

	cout << ans << endl;

	return 0;
}
