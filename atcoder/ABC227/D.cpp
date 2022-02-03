#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

// コンパイル時に
// -lgmpxx -lgmp
// int => mpz_class

int main(int argc, char **argv) {
	ll n, k, a[200005];
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	ll count = 0;

	for (int i = 0; i < n; i++) {
		sort(a, a + n, greater<int>());
		cout << i << ": ";
		for (int i = 0; i < n; i++) {
			cout << a[i] << " ";
		}
		cout << "\n";

		int temp = a[k - 1];
		// cout << "temp: " << temp << "\n";
		if (temp <= 0) break;
		for (int j = 0; j < k; j++) {
			a[j] -= temp;
		}
		count += temp;
	}

	cout << count << "\n";
	return 0;
}
