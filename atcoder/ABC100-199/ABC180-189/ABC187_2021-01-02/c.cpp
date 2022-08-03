#define _USE_MATH_DEFINES
#include <cmath>
#include <cstring>
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/times.h> // 構造体tmsを使うために必要.
#include <time.h>
#include <unistd.h>
// #include <iostream>
// #include <gmpxx.h>

// コンパイル時に
// -lgmpxx -lgmp

// printf("%d\n", x); => std::cout << x << "\n";
// scanf("%d", &x); => std::cin >> x;
// int => mpz_class

// using namespace std;で std:: を省略できる

int compare_int(const void *a, const void *b) {
	return *(int *)a - *(int *)b;
}

int main(int argc, char **argv) {
	int n;
	scanf("%d", &n);
	char s[n][15];
	for (int i = 0; i < n; i++) {
		scanf("%s", s[i]);
	}

	char exc[] = "!";

	for (int i = 0; i < n; i++) {
		char t[15];
		strcpy(t, s[i]);
		if (t[0] != '!') {
			char tmp[20];
			sprintf(tmp, "%s%s", exc, t);
			// printf("%s\n",tmp);
			for (int j = i; j < n; j++) {
				if (strcmp(s[j], tmp) == 0) {
					printf("%s\n", t);
					return 0;
				}
			}
		}
	}

	printf("satisfiable\n");

	return 0;
}
