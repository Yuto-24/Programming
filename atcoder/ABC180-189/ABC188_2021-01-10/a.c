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

int main(int argc, char **argv) {
	int x, y;
	scanf("%d%d", &x, &y);

	if (x > y) {
		int temp = y;
		y = x;
		x = temp;
	}

	if (x + 3 > y) {
		printf("Yes\n");
	} else {
		printf("No\n");
	}

	return 0;
}
