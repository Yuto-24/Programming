#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

// コンパイル時に
// -lgmpxx -lgmp
// int => mpz_class

int main(int argc, char **argv) {
	set<int> st;
	int n;
	cin >> n;
	ll t[n];
	ll k[n];
	ll a[n][n];
	for (int i = 0; i < n; i++) {
		cin >> t[i] >> k[i];
		for (int j = 0; j < k[i]; j++) {
			cin >> a[i][j];
			if (i == n - 1) {
				st.insert(a[i][j]);
			}
		}
	}

	auto itr = st.begin();
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k[i]; j++) {
			int temp = a[itr][j];
			if (temp == 0) {
				st.insert(0);
				break;
			}
		}
	}

	auto itr = st.begin();
	cout << *itr << endl;

	return 0;
}
