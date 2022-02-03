#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

// コンパイル時に
// -lgmpxx -lgmp
// int => mpz_class

ll f(int x) {
	return x * x + 2 * x + 3;
}

int main(int argc, char **argv) {
	ll t;
	cin >> t;
	ll ans;
	ans = f(f(f(t) + t) + f(f(t)));
	cout << ans << "\n";
	return 0;
}
