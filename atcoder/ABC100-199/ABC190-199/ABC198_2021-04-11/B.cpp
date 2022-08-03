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

int main(int argc, char **argv) {
	char str[25], copy[25];
	cin >> str;
	int n = strlen(str);
	int m = 0;
	int flag = 1;

	while (m < 10 && flag != 0) {
		// 文字列コピー
		for (int i = 0; i < n; i++) {
			copy[i] = str[n - i - 1];
		}
		// cout << "after copy:" << str << " " << copy << "\n";

		// 文字列比較
		flag = 0;
		for (int i = 0; i < n; i++) {
			if (str[i] != copy[i]) {
				flag++;
			}
		}
		// cout << "flag " << flag << "\n";

		// 0 を増やす処理
		char zero[25] = "0";
		strcat(zero, str);
		strcpy(str, zero);
		// cout << str << "\n";
		m++;
		n++;
		if (flag == 0) {
			cout << "Yes\n";
			return 0;
		}
	}

	cout << "No\n";

	return 0;
}
