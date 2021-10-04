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

int main(int argc, char **argv) {
	int m, n;
	cin >> m >> n;
	if (n % m == 0) {
		cout << "Yes" << "\n";
		return 0;
	}
	cout << "No" << "\n";

	return 0;
}
