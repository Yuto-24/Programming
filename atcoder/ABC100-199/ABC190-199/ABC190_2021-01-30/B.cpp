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
	long n, s, d;
	scanf("%ld%ld%ld", &n, &s, &d);
	long x[n], y[n];
	for (int i = 0; i < n; i++) {
		scanf("%ld%ld", &x[i], &y[i]);
	}

	long damage = 0;

	for (int i = 0; i < n; i++) {
		if (x[i] < s && y[i] > d) {
			printf("Yes\n");
			return 0;
		}
	}

	printf("No\n");
	return 0;
}
