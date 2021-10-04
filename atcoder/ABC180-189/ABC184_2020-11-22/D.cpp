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
double ans;

double p(double a, double b, double c) {
	double a_100 = 100 - a;
	double b_100 = 100 - b;
	double c_100 = 100 - c;
	ans += (a_100 * a + b_100 * b + c_100 * c) / (a + b + c);
}

int main(int argc, char **argv) {
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);
	
	return 0;
}
