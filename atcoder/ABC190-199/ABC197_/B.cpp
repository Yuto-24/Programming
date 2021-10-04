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

// Si は . および # のみからなる長さ W の文字列

int main(int argc, char **argv) {
	int h, w, x, y;
	cin >> h >> w >> x >> y;
	char s[h][w];

	for (int i = 0; i < h; i++) {
		cin >> s[i];
	}

	// for (int i = 1; i <= h; i++) {
	// for (int j = 1; j <= w; j++) {
	// cout << s[i][j];
	// }
	// cout << "\n";
	// }

	int count = 1;

	// 上方向(x-)
	for (int i = x - 2; i >= 0; i--) {
		if (s[i][y -1] == '.') {
			count++;
			// cout << "up\n";
		} else {
			break;
		}
	}

	// 下方向(x+)
	for (int i = x; i <= h; i++) {
		if (s[i][y - 1] == '.') {
			count++;
			// cout << "down\n";
		} else {
			break;
		}
	}

	// 左方向(y-)
	for (int i = y - 2; i >= 0; i--) {
		if (s[x-1][i] == '.') {
			count++;
			// cout << "left\n";
		} else {
			break;
		}
	}

	// 右方向(y+)
	for (int i = y; i < w; i++) {
		if (s[x-1][i] == '.') {
			count++;
			// cout << "right\n";
		} else {
			break;
		}
	}

	cout << count << "\n";

	return 0;
}
