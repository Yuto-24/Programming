#define _USE_MATH_DEFINES
#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <limits.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
using namespace std;
// #include <gmpxx.h>

// コンパイル時に
// -lgmpxx -lgmp
// int => mpz_class

// printf("%d\n", x); =>
// std::cout << x << "\n";
// scanf("%d", &x); =>
// std::cin >> x;

int main(int argc, char **argv) {
	long long r, x, y;
	cin >> r >> x >> y;
	long long temp = r;
	for (long long i = 1; i < 100000000000; i++) {
		if (x * x + y * y <= temp * temp) {
			if (i == 1 && x * x + y * y != temp * temp) {
				cout << 2 << "\n";
				return 0;
			} else {
				cout << i << "\n";
				return 0;
			}
		} else {
			temp += r;
		}
	}

	return 0;
}
