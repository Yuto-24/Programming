#define _USE_MATH_DEFINES
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/times.h> // 構造体tmsを使うために必要.
#include <time.h>
#include <unistd.h>

#define N 100005

int main(int argc, char **argv) {
	int n;
	scanf("%d", &n);

	int a[N], b[N];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n; i++) {
		scanf("%d", &b[i]);
	}

	int naiseki = 0;
	for (int i = 0; i < n; i++) {
		naiseki += (a[i] * b[i]);
	}

	if (naiseki == 0)
	{
		printf("Yes\n");
	} else {
		printf("No\n");
	}
	

	return 0;
}
