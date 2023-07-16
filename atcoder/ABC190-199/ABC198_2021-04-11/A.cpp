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

// // a[n]の入力
// long long n;
// cin >> n;
// long long a[n];
// for(int i = 0; i < n ;i++){
// 	cin >> a[i];
// }

int kaijo(int n) {
	int ans = 1;
	for (int i = 2; i <= n; i++) {
		ans *= i;
	}
	return n;
}

int main(int argc, char **argv) {
	int n;
	cin >> n;
	int m = kaijo(n);
	// cout << m << "\n";
	cout << (n * (n - 1)) / m << "\n";
	return 0;
}
