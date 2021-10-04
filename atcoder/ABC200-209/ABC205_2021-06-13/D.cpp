#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

// コンパイル時に
// -lgmpxx -lgmp
// int => mpz_class

// printf("%d\n", x); =>
// std::cout << x << "\n";
// scanf("%d", &x); =>
// std::cin >> x;

int main(int argc, char **argv) {
	ll n, q;
	ll k[100010];
	ll a[100010];
	// check
	// ll b[100010];
	// != 1 and sort
	// ll c[100010];
	ll count = 0;
	ll memory;

	// input start
	cin >> n >> q;
	// // reset b
	// for (ll i = 0; i <= n; i++) {
	// 	b[i] = 0;
	// }
	// b[a[i]] = 1
	for (ll i = 1; i <= n; i++) {
		// ll temp;
		cin >> a[i];
		// cin >> temp;
		// b[temp] = 1;
	}
	for (ll i = 1; i <= q; i++) {
		cin >> k[i];
	}
	// input end

	// copy to c
	// for (ll i = 0; i <= 100000; i++) {
	// 	if (b[i] != 1) {
	// 		c[count] = i;
	// 		count++;
	// 		// memory = i;
	// 	}
	// }

	// for (ll i = 1; i <= 50; i++) {
	// 	cout << i << ":" << c[i] << endl;
	// }

	// for (int i = 1; i <= q; i++) {
	// 	cout << c[k[i]] << endl;
	// }

	

	return 0;
}
