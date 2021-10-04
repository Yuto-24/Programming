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
	int a[1005];
	int b[1005];
	cin >> n;
	for (int i = 1; i <= n; i++) {
		b[i] = 0;
	}

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		b[a[i]]++;
	}

	for (int i = 1; i <= n; i++) {
		if (b[i] != 1) {
			// cout << "bad b:" << b[i] << ", i:" << i << endl;
			cout << "No" << endl;
			return 0;
		}
	}

	cout << "Yes" << endl;
	return 0;
}
