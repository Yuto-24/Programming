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

int main(int argc, char **argv) {
	char s[1005];
	cin >> s;
	// a = 97
	// A = 65
	int l = strlen(s);
	for (int i = 0; i < l; i++) {
		int temp = i % 2;
		if (temp == 0) {
			// iが偶数
			// sは奇数番目 => 小文字
			if ((int)s[i] < 'a') {
				cout << "No"
					 << "\n";
				return 0;
			}
		} else {
			if ((int)s[i] >= 'a') {
				cout << "No"
					 << "\n";
				return 0;
			}
		}
	}

	cout << "Yes" << "\n";
	return 0;
}
