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
	double x, y, r;
	long num = 0;
	scanf("%lf%lf%lf", &x, &y, &r);
	int x_max, x_min;
	int y_max, y_min;
	x_max = x + r;
	x_min = x - r;
	y_max = y + r;
	y_min = y - r;

	double tmp;
	tmp = x - r - x_min;
	if (tmp != 0) {
		if (x_min > 0) {
			x_min++;
		}
	}

	tmp = y - r - y_min;
	if (tmp != 0) {
		if (y_min > 0) {
			y_min++;
		}
	}

	// if (x_min <= 0) {
	// 	int absx = abs(x_min);
	// 	x_min += absx + 1;
	// 	x += absx + 1;
	// 	x_max += absx + 1;
	// }

	if (y_min <= 0) {
		int absy = abs(x_min);
		y_min += absy + 1;
		y += absy + 1;
		y_max += absy + 1;
	}

	printf("xmax: %d\n", x_max);
	printf("xmin: %d\n", x_min);

	for (int i = x_min; i <= x_max; i++) {
		long double temp1, temp2;
		long upper, bottom;

		temp1 = y + sqrt(r * r - (i - x) * (i - x));
		if (temp1 == (int)temp1) {
			upper = (int)temp1;
		} else {
			upper = (int)temp1 - 1;
		}

		temp2 = y - sqrt(r * r - (i - x) * (i - x));
		bottom = temp2;

		// printf("x:%d -> ", i);
		// printf("%ld ", upper);
		// printf("%ld\n", bottom);
		num += upper - bottom + 1;
	}
	printf("%ld\n", num);

	return 0;
}
