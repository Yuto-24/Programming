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
	long long n, x;
	scanf("%lld%lld", &n, &x);

	char s[n];
	scanf("%s", s);

	// printf("%s", s);
	for (int i = 0; i < n; i++) {
		if (s[i] == 'x') {
			x--;
			if (x < 0) {
				x = 0;
			}

		} else {
			x++;
		}
	}
	printf("%lld\n",x);

	return 0;
}
