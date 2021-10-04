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

int main() {
	long long n;
	scanf("%lld", &n);
	long long count = 0;
	long long temp;
	long long check[1000000];

	for (int a = 2; a * a <= n; a++) {
		for (int b = 2; b < n; b++) {
			temp = pow(a, b);
			if (temp > n) {
				break;
			}

			if (temp <= n) {
				check[count] = temp;
				int flag = 0;
				for (int i = 0; i < count; i++) {
					if (check[i] == temp) {
						flag = 1;
						break;
					}
				}
				if (flag == 0) {
					count++;
					// cout << a << " " << b << "\n";
				}
			}
		}
	}

	cout << n - count << "\n";
	return 0;
}
