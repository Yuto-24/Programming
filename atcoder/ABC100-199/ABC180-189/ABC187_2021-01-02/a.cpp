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

int main() {
	char a[5], b[5];
	int sa = 0, sb = 0;
	scanf("%s%s", a, b);

	sa = ((char)a[0] + (char)a[1] + (char)a[2]) - '0' - '0' - '0';
	sb = ((char)b[0] + (char)b[1] + (char)b[2]) - '0' - '0' - '0';

	if (sa >= sb) {
		printf("%d\n", sa);
	} else
		printf("%d\n", sb);

	return 0;
}
