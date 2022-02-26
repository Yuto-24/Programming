#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int
char s[1005][1005];

// コンパイル時に
// -lgmpxx -lgmp
// int => mpz_class

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	// intput end

	for (int i = 0; i < n; i++) {
		// horizontal, vertical, diagonal
		for (int j = 0; j < n; j++) {
			int h = 0;
			int v = 0;
			int d1 = 0;
			int d2 = 0;
			for (int a = 0; a < 6; a++) {
				if (s[i + a][j] == '#') {
					v++;
				}
				if (s[i][j + a] == '#') {
					h++;
				}
				if (s[i + a][j + a] == '#') {
					d1++;
				}
				if (j - a >= 0 && s[i + a][j - a] == '#') {
					d2++;
				}
			}
			if (h >= 4 || v >= 4 || d1 >= 4 || d2 >= 4) {
				// cout << i << " " << j << "\n";
				// cout << h << " " << v << " " << d << "\n";
				cout << "Yes\n";
				return 0;
			}
		}
	}
	cout << "No\n";

	return 0;
}
