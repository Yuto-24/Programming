#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

// コンパイル時に
// -lgmpxx -lgmp
// int => mpz_class

int main() {
	ll l, r;
	char s[100005];
	char t[100005];
	cin >> l >> r;
	cin >> s;

	for (int i = 0; i < strlen(s); i++) {
		if (l - 1 <= i && i <= r - 1) {
			t[i] = s[l + r - i - 2];
		} else {
			t[i] = s[i];
		}
		cout << t[i];
	}

	cout << "\n";

	return 0;
}
