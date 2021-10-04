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
	int v, t, s, d;
	scanf("%d%d%d%d", &v, &t, &s, &d);
	if (d >= v * t && d <= v * s) {
		printf("No\n");
		return 0;
	}
	printf("Yes\n");
	return 0;
}
