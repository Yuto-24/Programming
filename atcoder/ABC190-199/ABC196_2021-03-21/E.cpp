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
	// start input
	long long n;
	cin >> n;

	long a[n];
	long t[n];

	long q;

	for (int i = 0; i < n; i++) {
		cin >> a[i] >> t[i];
	}

	cin >> q;

	long x[q];
	long f[q];

	for (int i = 0; i < q; i++) {
		cin >> x[i];
	}
	// end input

	for (int j = 0; j < q; j++) {
		long temp = x[j];
		for (int i = 0; i < n; i++) {
			f[i] = temp;
		}
	}

	return 0;
}
