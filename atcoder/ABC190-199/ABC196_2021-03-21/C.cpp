#define _USE_MATH_DEFINES
#include <cmath>
#include <cstring>
#include <iostream>
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
using namespace std;

// printf("%d\n", x); =>
// cout << x << "\n";

// scanf("%d", &x); =>
// cin >> x;

int CountE(int n) {
	int count = 0;
	for (int i = n; i >= 1; i /= 10) {
		count++;
	}
	return count;
}

int compare_int(const void *a, const void *b) {
	return *(int *)a - *(int *)b;
}

int main(int argc, char **argv) {
	long long n;
	cin >> n;

	long long temp;
	long long count = 0;
	int ce;
	for (int i = 1; i <= n; i++) {
		ce = CountE(i);
		temp = i + i * pow(10, ce);
		if (temp > n) {
			cout << count << "\n";
			return 0;
		}

		// cout << temp << "\n";
		count++;
	}

	return 0;
}
