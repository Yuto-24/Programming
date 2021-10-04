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
	// input
	int n, m;
	scanf("%d%d", &n, &m);
	int a[m], b[m];
	for (int i = 0; i < m; i++) {
		scanf("%d%d", &a[i], &b[i]);
	}
	int k;
	scanf("%d", &k);
	int c[k], d[k];
	for (int i = 0; i < k; i++) {
		scanf("%d%d", &c[i], &d[i]);
	}

	

	return 0;
}
