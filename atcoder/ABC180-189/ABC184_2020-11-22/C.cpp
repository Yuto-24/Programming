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

double distance(int r1, int c1, int r2, int c2) {
	return (sqrt((r2 - r1) * (r2 - r1) + (c2 - c1) * (c2 - c1)));
}

int main(int argc, char **argv) {
	int r1, c1, r2, c2;
	if (distance(r1, c1, r2, c2) == 0) {
		puts("0");
		return 0;
	}

	// x 方向の半分の距離
	int b = (r2 - r1) / 2;
	// そのときのy
	int b1 = c2 - b;
	int b2 = c2 + b;

	// x方向の距離
	int d = (r2 - r1);
	// そのときのy
	int d1 = c2 - d;
	int d2 = c1 - d;

	double min_distance = distance(r1, c1, r2, c2);

	double disb1 = distance(r1, c1, b, b1);
	double disb2 = distance(r1, c1, b, b2);
	double disd1 = distance(r1, c1, d, d1);
	double disd2 = distance(r1, c1, d, d1);
	
	int mark = 0;

	if (disb1 < min_distance) {
		min_distance = disb1;
		mark = 1;
	}
	if (disb2 < min_distance) {
		min_distance = disb2;
		mark = 2;
	}
	if (disd1 < min_distance) {
		min_distance = disd1;
		mark = 3;
	}
	if (disd2 < min_distance) {
		min_distance = disd2;
		mark = 4;
	}

	switch (mark)
	{
	case 1:
		/* code */
		break;
	
	default:
		break;
	}

	return 0;
}
