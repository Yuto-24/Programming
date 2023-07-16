#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

int main(int argc, char **argv) {
	ll n;
	ll t[105];
	ll m;
	ll p[105];
	ll x[105];
	ll st = 0;
	cin >> n;
	for (ll i = 0; i < n; i++) {
		cin >> t[i];
	}
	cin >> m;
	for (ll i = 0; i < m; i++) {
		cin >> p[i] >> x[i];
	}

	for (ll i = 0; i < m; i++) {
		st = 0;
		for (ll j = 0; j < n; j++) {
			if (j + 1 == p[i]) {
				st += x[i];
			} else {
				st += t[j];
			}
		}
		cout << st << endl;
	}

	return 0;
}
