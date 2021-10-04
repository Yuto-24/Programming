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
#include <algorithm>
using namespace std;

int main(int argc, char **argv) {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << min({a, b, c, d}) << "\n";
	return 0;
}
