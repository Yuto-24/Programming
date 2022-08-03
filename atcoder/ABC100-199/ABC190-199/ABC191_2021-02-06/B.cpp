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
	long n, x;
	scanf("%ld%ld", &n, &x);
	long a[n];
	long j = 0;

	for (int i = 0; i < n; i++) {
		long tmp;
		scanf("%ld", &tmp);
		if (tmp != x) {
			a[j] = tmp;
			j++;
		}
	}

	for (int i = 0; i < j; i++) {
		printf("%ld ", a[i]);
	}
	printf("\n");

	return 0;
}
