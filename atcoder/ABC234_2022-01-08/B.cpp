#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int
#define ld long double

// コンパイル時に
// -lgmpxx -lgmp
// int => mpz_class

ld dist(ld x_i, ld y_i, ld x_j, ld y_j) {
	ld ans;
	ld x = x_j - x_i;
	ld y = y_j - y_i;
	ans = sqrt(x * x + y * y);
	return ans;
}

int main(int argc, char **argv) {
	ll n;
	ld x[105], y[105];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
	}
	// input end
	ld max = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			ld temp_dist = dist(x[i], y[i], x[j], y[j]);
			if (temp_dist > max) {
				max = temp_dist;
			}
		}
	}

	cout << fixed << setprecision(10);
	cout << max << "\n";

	return 0;
}
