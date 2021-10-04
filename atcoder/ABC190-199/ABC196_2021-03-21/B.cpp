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
	char x[200000];
	cin >> x;
	for (int i = 0; i < 200; i++) {
		if (x[i] == '.' || x[i] == '\0') {
			break;
		} else {
			cout << x[i];
		}
	}
	cout << "\n";
	return 0;
}
