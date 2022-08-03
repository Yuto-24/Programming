#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

// コンパイル時に
// -lgmpxx -lgmp
// int => mpz_class

int main(int argc, char **argv) {
	ll n;
	ll x;
	ll l[50005];
	cin >> n >> x;
	ll a[n][n];
	for (int i = 0; i < n; i++) {
		cin >> l[i];
		for (int j = 0; j < l[i]; j++) {
			cin >> a[i][j];
		}
	}

	ll count = 0;
	ll temp = 1;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < l[i]; j++) {
			
		}
	}

	return 0;
}
