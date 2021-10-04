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
	int a, c;
	int n;
	int count = 0;
	cin >> n;

	for (int c = 1; c < n; c++) {
		for (int a = 1; a <= n - c; a++) {
			if ((n - c) % a == 0) {
				count++;
				// cout << "(" << a << ", "<< (n - c) / a << ", " << c << ")" << "\n";
			}
		}
	}

	cout << count << "\n";

	return 0;
}
