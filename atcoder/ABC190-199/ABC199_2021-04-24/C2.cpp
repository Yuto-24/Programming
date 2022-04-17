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

void swap_mine(char *a, char *b) {
	char temp = *a;
	a = b;
	*b = temp;
}

int main(int argc, char **argv) {
	long long n, q;
	cin >> n;
	char s[2 * n];
	cin >> s;
	char s1[n], s2[n];
	strcpy(s1, s);
	strcpy(s2, s + n);
	cin >> q;
	long long t[q];
	long long count_t = 0;
	long long a[q];
	long long b[q];
	for (int i = 0; i < q; i++) {
		cin >> t[i] >> a[i] >> b[i];
		if (t[i] == 1) {
			if (a[i] <= n && b[i] <= n) {
				swap_mine(&s1[a[i]], &s1[b[i]]);
			} else if (a[i] > n && b[i] > n) {
				a[i] -= n;
				b[i] -= n;
				swap_mine(&s2[a[i]], &s2[b[i]]);
			} else if (a[i] <= n && b[i] > n) {
				b[i] -= n;
				swap_mine(&s1[a[i]], &s2[b[i]]);
			} else if (a[i] > n && b[i] <= n) {
				a[i] -= n;
				swap_mine(&s2[a[i]], &s1[b[i]]);
			}
		} else {
			count_t++;
		}
	}
	if (count_t % 2 == 0) {
		cout << s1 << s2 << endl;
	} else {
		cout << s2 << s1 << endl;
	}

	return 0;
}