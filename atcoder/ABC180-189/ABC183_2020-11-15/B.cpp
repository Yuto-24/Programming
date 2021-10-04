#define _USE_MATH_DEFINES
#include <cmath>
#include <cstring>
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/times.h> // 構造体tmsを使うために必要.
#include <time.h>
#include <unistd.h>
// #include <iostream>
// #include <gmpxx.h>

// コンパイル時に
// -lgmpxx -lgmp

// printf("%d\n", x); => std::cout << x << "\n";
// scanf("%d", &x); => std::cin >> x;
// int => mpz_class

// using namespace std;で std:: を省略できる

int main(int argc, char **argv) {
	long double sx, sy, gx, gy;
	long double a, b, x0;
	scanf("%Lf%Lf%Lf%Lf", &sx, &sy, &gx, &gy);

	a = ((-gy - sy)/(gx - sx));
	b = (sy - sx * a);
	x0 = -b / a;

	// printf("%.10Lf\n",a);
	// printf("%.10Lf\n",b);
	printf("%.10Lf\n",x0);

	return 0;
}
