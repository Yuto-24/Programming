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
	int a, b, w;
	cin >> a >> b >> w;
	w *= 1e3;
	int wa = w / a;
	int wb = w / b;

	if (wb == wa) {
		cout << "UNSATISFIABLE"
			 << "\n";
		return 0;
	}

	int max = wa;
	int min;
	if (w % b != 0) {
		min = wb + 1;
	} else {
		min = wb;
	}

	cout << min << " " << max << "\n";

	return 0;
}
