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
	char x[10];
	cin >> x;
	int flag = 0;
	for (int i = 0; i < 3; i++) {
		if (x[i] == x[i + 1]) {
			flag++;
		}
	}
	if (flag == 3) {
		cout << "Weak" << endl;
		return 0;
	}

	flag = 0;
	for (int i = 0; i < 3; i++) {
		// cout << "x[i]:" << x[i] << ", x[i + 1]:" << x[i + 1] << endl;
		if (x[i] + 1 == x[i + 1]) {
			flag++;
			// cout << "Check1" << endl;
		}
		if (x[i] == '9' && x[i + 1] == '0') {
			flag++;
			// cout << "Check2" << endl;
		}
	}
	if (flag == 3) {
		cout << "Weak" << endl;
		return 0;
	}

	cout << "Strong" << endl;

	return 0;
}
