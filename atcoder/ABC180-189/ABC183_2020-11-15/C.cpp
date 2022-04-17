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

void clean(int n, int *s1) {
	for (int i = 0; i < n; i++) {
		s1[i] = 0;
	}
}

int joudge(int n, int *s1) {
	for (int i = 0; i < n; i++) {
		if (s1[i] == 1) {
			return (i + 2);
		}
	}
	return 0;
}

int main(int argc, char **argv) {
	long long n;
	long long k;
	scanf("%lld%lld", &n, &k);

	long long t[n];
	long long T[n][n];
	int s1[n];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%lld", &T[i][j]);
		}
	}

	return 0;
}
