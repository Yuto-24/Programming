#define _USE_MATH_DEFINES
#include <cmath>
#include <cstring>
#include <iostream>
#include <limits.h>
#include <stdbool.h>
#include <stdlib.h>
#include <sys/times.h> // 構造体tmsを使うために必要.
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
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (a < b) {
		printf("Aoki\n");
	} else if (a == b) {
		if (c == 0) {
			printf("Aoki\n");
		} else {
			printf("Takahashi\n");
		}
	} else {
		printf("Takahashi\n");
	}
	return 0;
}
