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
	int n;
	scanf("%d", &n);
	double x[n + 5];
	double y[n + 5];
	for (int i = 0; i < n; i++) {
		scanf("%lf%lf", &x[i], &y[i]);
	}

	int sum = 0;
	for (int i = 0; i <= n; i++) {
		for (int j = i + 1; j < n; j++) {
		// 	printf("%d %d\n", i, j);
		// 	printf("x1:%lf y1:%lf x2:%lf y2:%lf\n", x[i], y[i], x[j], y[j]);
		// 	printf("tan %lf\n", (y[j] - y[i]) / (x[j] - x[i]));
			if ((y[j] - y[i]) / (x[j] - x[i]) >= -1 && (y[j] - y[i]) / (x[j] - x[i]) <= 1) {
				sum++;
				// printf("%d %d ", i, j);
				// printf("%d\n", sum);
			}
		}
	}
	printf("%d\n", sum);

	return 0;
}
