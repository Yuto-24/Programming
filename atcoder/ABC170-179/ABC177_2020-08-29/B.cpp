#define _USE_MATH_DEFINES
#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <limits.h>
#include <stdbool.h>
#include <stdlib.h>
#include <sys/times.h>
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

int main() {
	char s[1005];
	char t[1005];
	cin >> s >> t;
	int min = 1000;
	int dif = 0;
	int sl = strlen(s);
	int tl = strlen(t);
	for (int i = 0; i <= sl - tl; i++) {
		for (int j = 0; j < tl; j++) {
			if (s[i + j] != t[j]) {
				dif++;
			}
		}
			// cout << "i: " << i << ", dif: " << dif << "\n";
		if (dif < min) {
			min = dif;
		}
		dif = 0;
	}

	cout << min << "\n";

	return 0;
}
