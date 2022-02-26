#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

// コンパイル時に
// -lgmpxx -lgmp
// int => mpz_class

// int cmp(ll a, ll b) {
// 	if (a.x == b.x) {
// 		return a.y < b.y;
// 	}
// 	return a.x < b.x;
// }

int main(int argc, char **argv) {
	ll n, m;
	cin >> n >> m;
	ll a[1005];
	ll b[1005];
	a[n] = '\0';
	b[m] = '\0';
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	// input end
	sort(a, a + n);
	sort(b, b + m);
	for (int i = 0; i < n; i++) {
		// cout << a[i] << " ";
	}
	// cout << endl;
	for (int i = 0; i < m; i++) {
		// cout << b[i] << " ";
	}
	// cout << endl;
	// sort end

	for (int i = 0; i < m; i++) {
		int flag = 0;
		for (int j = 0; j < n; j++) {
			if (b[i] == a[j]) {
				a[j] = 0;
				flag = 1;
				break;
			}
			//  else if (a[j] < b[i]) {
			// 	cout << "Skip " << i << " " << j << endl;
			// 	break;
			// }
		}
		if (flag == 0) {
			// cout << i << ": ";
			cout << "No\n";
			return 0;
		}
	}
	cout << "Yes\n";

	return 0;
}
