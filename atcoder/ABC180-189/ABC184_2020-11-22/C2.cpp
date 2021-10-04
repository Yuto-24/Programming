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
	long long r1, c1, r2, c2;
	scanf("%lld%lld%lld%lld", &r1, &c1, &r2, &c2);

	if (r2 - r1 < 0) {
		long long temp = r1;
		r1 = r2;
		r2 = temp;
	}
	if (c2 - c1 < 0) {
		long long temp = c1;
		c1 = c2;
		c2 = temp;
	}

	if (c2 > r2) {
		long long temp = c2;
		c2 = r2;
		r2 = temp;
	}

	if (r1 == r2 && c1 == c2) {
		puts("0");
		return 0;
	}

	if (r1 + c1 == r2 + c2 || r1 - c1 == r2 - c2 || abs(r1 - r2) + abs(c1 - c2) <= 3) {
		puts("1");
		return 0;
	}

	if ((r2 - r1) % 2 == 0 && (c2 - c1) % 2 == 0) {
		puts("2");
		return 0;
	}

	// if (r2 - c2 <= 3) {
	// 	puts("2");
	// 	return 0;
	// }

	if (r2 - r1 - c2 <= 3) {
		puts("2");
		return 0;
	}

	if (r2 - r1 + c2 - c1 <= 3) {
		puts("2");
		return 0;
	}

	if (c1 == c2 && (r2 - r1) % 2 == 0) {
		puts("2");
		return 0;
	} else if (c1 == c2) {
		puts("3");
		return 0;
	}

	puts("3");

	return 0;
}
