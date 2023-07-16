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
	long double x0, y0;
	long double xn, yn;
	cin >> n;
	cin >> x0 >> y0;
	cin >> xn >> yn;

	// 中心点
	long double xo, yo;
	xo = (x0 + xn) / 2;
	yo = (y0 + yn) / 2;
	x0 -= xo;
	y0 -= yo;
	double theta = (M_PI * 2) / n;
	long double x1, y1;
	x1 = x0 * cos(theta) - y0 * sin(theta);
	y1 = x0 * sin(theta) + y0 * cos(theta);
	x1 += xo;
	y1 += yo;
	// cout << x1 << " " << y1 << "\n";
	printf("%.11Lf %.11Lf\n", x1, y1);

	return 0;
}
