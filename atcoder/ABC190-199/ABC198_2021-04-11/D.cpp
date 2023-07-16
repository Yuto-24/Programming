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
	char s1[15], s2[15], s3[15];
	cin >> s1;
	cin >> s2;
	cin >> s3;

	int slen1, slen2, slen3;
	slen1 = strlen(s1);
	slen2 = strlen(s2);
	slen3 = strlen(s3);

	int count = 0;

	int same12[15];
	for (int i = 0; i < max(slen1, slen2); i++) {
		if (s1[i] == s2[i]) {
			same12[i] == 1;
			count++;
		}
	}

	int same13[15];
	for (int i = 0; i < slen3; i++) {
		if (s1[i] == s3[i]) {
			same13[i] == 1;
			count++;
		}
	}

	int same23[15];
	for (int i = 0; i < slen3; i++) {
		if (s3[i] == s2[i]) {
			same23[i] == 1;
			count++;
		}
	}

	for (int i = pow(10, slen1 - 1); i < pow(10, slen1); i++) {
		for (int j = pow(10, slen2 - 1); j < pow(10, slen2); j++) {
			if (!count) {
				if (i != j && i != i + j && j != i + j) {
					cout << i << "\n";
					cout << j << "\n";
					cout << i + j << "\n";
					return 0;
				}
			}

			// cout << i << " " << j << " " << i + j << "\n";
		}
	}

	return 0;
}
