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
	int h, w;
	scanf("%d%d", &h, &w);
	char s[w][h];
	for (int i = 0; i < w; i++) {
		for (int j = 0; j < h; j++) {
			scanf("%c", &s[i][j]);
		}
	}

	return 0;
}
