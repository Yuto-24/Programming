#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

// コンパイル時に
// -lgmpxx -lgmp
// int => mpz_class

int main() {
	ll n, x;
	ll a[100005];
	int b[100005];
	ll count = 1;
	cin >> n >> x;
	b[x] = 1;
	for (ll i = 1; i <= n; i++) {
		cin >> a[i];
	}

	ll i = x;
	while (1) {
		if (!b[a[i]]) {
			b[a[i]] = 1;
			i = a[i];
			count++;
		} else {
			break;
		}
	}

	cout << count << "\n";

	return 0;
}
