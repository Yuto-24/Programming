#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

int main(int argc, char **argv) {
	char x[5], y[5];
	cin >> x >> y;
	int xx, yy;
	xx = 0;
	yy = 0;
	for (int i = 0; i < strlen(x); i++) {
		xx += x[i] - '0';
	}
	for (int i = 0; i < strlen(y); i++) {
		yy += y[i] - '0';
	}
	xx %= 10;
	yy %= 10;

	if (xx == yy) {
		cout << "Draw" << endl;
	} else if (xx > yy) {
		cout << "Bob" << endl;
	} else {
		cout << "Alice" << endl;
	}

	return 0;
}
