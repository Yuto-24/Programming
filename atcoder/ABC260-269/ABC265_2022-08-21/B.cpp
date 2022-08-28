#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

int main() {
	ll n, m, t;
	ll a[100000];
	ll x[100000], y[100000];

	cin >> n >> m >> t;
	for (ll i = 0; i < n - 1; i++) {
		cin >> a[i];
	}
	for (ll i = 0; i < m; i++) {
		cin >> x[i] >> y[i];
	}

	// cout << x[0] << " " << y[0] << endl;

	ll j = 0;
	for (ll i = 0; i < n - 1; i++) {
		t -= a[i];
		if (t <= 0) {
			cout << "No" << endl;
			return 0;
		}
		if (i + 2 == x[j]) {
			t += y[j];
			j++;
		}
		// cout << i << " " << t << endl;
	}

	cout << "Yes" << endl;

	return 0;
}
