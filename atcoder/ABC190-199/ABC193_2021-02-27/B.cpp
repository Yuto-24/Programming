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
	scanf("%d", &n);
	long a[n], p[n], x[n];
	for (int i = 0; i < n; i++) {
		scanf("%ld%ld%ld", &a[i], &p[i], &x[i]);
	}
	long min = 999999999;
	int flag = 0;
	for (int i = 0; i < n; i++) {
		if (x[i] - a[i] > 0 && min > p[i]) {
			min = p[i];
			flag = 1;
		}
	}

	if (flag == 0) {
		cout << -1 << "\n";
	} else {
		cout << min << "\n";
	}

	return 0;
}
