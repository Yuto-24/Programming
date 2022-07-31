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

	ll ans = 0;
	ll minA, maxA;
	for (int i = 0; i <= n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int count = i; count <= j; count++) {
				minA = min(a[i], a[j]);
				maxA = max(a[i], a[j]);
			}
			// cout << "i:\t" << i + 1 << "\tj:\t" << j + 1 << endl;
			// cout << "minA:\t" << minA << "\tmaxA:\t" << maxA << endl;
			if (i + 1 == minA && j + 1 == maxA) {
				ans++;
				// cout << "\nans::  ";
				// cout << "i:" << i + 1 << ", j:" << j + 1 << endl
				//      << endl;
			}
		}
	}

	cout << ans << endl;
	return 0;
}
