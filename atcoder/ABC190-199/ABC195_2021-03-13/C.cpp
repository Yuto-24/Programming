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
	// nの入力
	long long n;
	cin >> n;
	long long count = 0;

	if (n >= 1e15) {
		count += 5;
		n = 1e15 - 1;
	}

	if (n >= 1e12) {
		count += (4 * (n - (1e12 - 1)));
		n = 1e12 - 1;
	}

	if (n >= 1e9) {
		count += (3 * (n - (1e9 - 1)));
		n = 1e9 - 1;
	}

	if (n >= 1e6) {
		count += (2 * (n - (1e6 - 1)));
		n = 1e6 - 1;
	}

	if (n >= 1e3) {
		count += (n - (1e3 - 1));
		n = 1e3 - 1;
	}

	if (n < 1000) {
		count += 0;
	}

	cout << count << "\n";

	return 0;
}
