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
	long long n;
	int k;
	cin >> n >> k;
	for (int i = 0; i < k; i++) {
		if (n % 200 == 0) {
			n /= 200;
		} else {
			n = n * 1000 + 200;
		}
	}

	cout << n << endl;

	return 0;
}
