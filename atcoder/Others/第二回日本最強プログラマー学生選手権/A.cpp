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


int main(int argc, char **argv) {
	int x, y, z;
	cin >> x >> y >> z;
	int max;
	for (int i = y * z / x - 1; y * z > i * x; i++) {
		max = i;
	}


	cout << max << endl;
	return 0;
}
