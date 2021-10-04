#define _USE_MATH_DEFINES
#include <algorithm>
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

int main(int argc, char **argv) {
	long long a, b;
	cin >> a >> b;
	int n = b - a + 1;
	long long count = n + 1;
	long long s[n + 5];

	for (int i = 0; i < n; i++) {
		s[i] = a + i;
		for (int j = 0; j < n; j++) {
			if (__gcd(s[i], s[j]) == 1) {
				s[i] = a;
				s[i + 1] = a + i;
				count++;
			} else {
				s[i] = 0;
			}
		}

		if (__gcd(a, a + i) == 1) {
			s[i] = a;
			s[i + 1] = a + i;
			count++;
		} else {
			s[i] = 0;
		}
	}

	for (int i = 0; i < n; i++) {
		if (s[i] == 0) {
			break;
		}
		for (int j = 0; j < n; j++) {
			if (s[j] == 0) {
				break;
			}
		}
	}

	return 0;
}
