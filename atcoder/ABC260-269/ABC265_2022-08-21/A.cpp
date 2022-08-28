#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

// コンパイル時に
// -lgmpxx -lgmp
// int => mpz_class

int main(int argc, char **argv) {
	int x, y, n;
	cin >> x >> y >> n;
	int ans = 0;
	while (n > 0) {
		if (n >= 3 && y < x * 3) {
			ans += y;
			n -= 3;
		} else {
			ans += x;
			n -= 1;
		}
	}

	cout << ans << endl;
	return 0;
}
