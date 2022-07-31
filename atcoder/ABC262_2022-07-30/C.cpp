#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

// コンパイル時に
// -lgmpxx -lgmp
// int => mpz_class

int main(int argc, char **argv) {
	cout << fixed << setprecision(10);
	ll n;
	cin >> n;
	ll a[500005];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	ll countEq = 0;
	ll count = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == i + 1) {
			countEq++;
			cout << "eq" << endl;
		}
		if (i + 1 == a[a[i] - 1]) {
			count++;
			cout << "c" << i << endl;
		}
	}
	count /= 2;
	// countEq *= (countEq - 1);
	// countEq /= 2;
	// count += countEq;

	cout << count << endl;
	return 0;
}
