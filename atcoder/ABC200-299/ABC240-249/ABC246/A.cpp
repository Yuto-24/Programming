#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

// コンパイル時に
// -lgmpxx -lgmp
// int => mpz_class

int main(int argc, char **argv) {
	ll x[5], y[5];
	for (int i = 0; i < 3; i++) {
		cin >> x[i] >> y[i];
	}

	ll x_ans;
	ll y_ans;

	if (x[0] == x[1]) {
		x_ans = x[2];
	} else if (x[0] == x[2]) {
		x_ans = x[1];
	} else {
		x_ans = x[0];
	}
	if (y[0] == y[1]) {
		y_ans = y[2];
	} else if (y[0] == y[2]) {
		y_ans = y[1];
	} else {
		y_ans = y[0];
	}

	cout << x_ans << " " << y_ans << endl;
	return 0;
}
