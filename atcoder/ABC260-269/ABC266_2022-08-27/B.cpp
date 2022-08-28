#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

// コンパイル時に
// -lgmpxx -lgmp
// int => mpz_class

int main(int argc, char **argv) {
	ll n;
	cin >> n;
	for (int i = 0; i < 1e18; i++) {
		if ((n - i) % 998244353 == 0) {
			cout << i << endl;
			break;
		}
	}

	return 0;
}
