#define _USE_MATH_DEFINES
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/times.h> // 構造体tmsを使うために必要.
#include <time.h>
#include <unistd.h>

#define N 28123

// A number n is called deficient if the sum of its proper divisors is less than n and it is called abundant if this sum exceeds n.
// deficient: 約数の和がn以下
// perfect: 約数の和がnに等しい
// abundant: 約数の和がn以上 (過剰数)

// 正の整数のうち，過剰数の合成で表せない数の合計を求めよ
// n = 0 to n = 28123

// 約数の和
long long sum_digit(long long n) {
	long long sum = 1;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			sum += i;
			if (i != (n / i)) {
				sum += (n / i);
			}
		}
	}
	return sum;
}

// 過剰数かどうかを判定 過剰数なら0，違うなら1
int non_abundant(long long n) {
	if (sum_digit(n) > n) {
		return 0;
	} else {
		return 1;
	}
}

int main() {
	long long num[N + 5];

	// abundant か判定
	for (int i = 1; i <= N; i++) {
		// iが過剰数なら0，他は1が入る
		num[i] = non_abundant(i);
	}

	// abundant 2つの和
	long long sum[2 * N + 5];
	// sumが
	for (int i = 1; i <= 2 * N; i++) {
		sum[i] = 1;
	}

	for (int i = 1; i <= N; i++) {
		for (int j = i; j <= N; j++) {
			if (num[i] == 0 && num[j] == 0) {
				sum[i + j] = 0;
			}
		}
	}

	long long s = 0;
	for (int i = 1; i <= N; i++) {
		// printf("i: %d\n",i);
		if (sum[i] == 1) {
			s += i;
			// printf("i: %d\ts: %lld\n", i, s);
		}
	}

	printf("%lld\n", s);

	return 0;
}
