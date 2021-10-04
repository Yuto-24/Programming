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

int main() {
	int a, b;
	cin >> a >> b;

	// int max_gcd = 1;
	for (int i = b - 1; i > 0; i--) {
		if (b / i - (a - 1) / i >= 2) {
			cout << i << endl;
			return 0;
		}
	}

	// cout << max_gcd << endl;

	return 0;
}
