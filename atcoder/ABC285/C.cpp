#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

ll power(ll a, ll b) {
	ll ans = 1;
	for (ll i = 0; i < b; i++) {
		ans *= a;
	}
	return ans;
}

int main() {
	char s[20];
	cin >> s;
	ll n = strlen(s);
	ll ans = 0;

	for (ll i = n; i > 0; i--) {
		ans += (s[i - 1] - 'A' + 1) * power(26, n - i);
	}
	cout << ans << endl;

	return 0;
}
