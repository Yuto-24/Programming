#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

int main(int argc, char **argv) {
	ll n, p, q, r;
	cin >> n >> p >> q >> r;
	ll a[200005];
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
	}

	int xx, yy, zz, ww;
	for (int x = 0; x < n; x++) {
		int temp = 0;
		// cout << "x" << x << endl;
		for (int y = x; y < n; y++) {
			temp += a[y];
			// cout << "y" << y << " " << temp << endl;
			if (temp > p) {
				// cout << "No" << endl;
				break;
			} else if (temp == p) {
				xx = x + 1;
				yy = y + 1;
				break;
			}
		}
		temp = 0;
		for (int z = yy; z < n; z++) {
			temp += a[z];
			// cout << "z" << z << " " << temp << endl;
			if (temp > q) {
				// cout << "No" << endl;
				break;
			} else if (temp == p) {
				zz = z + 1;
				break;
			}
		}
		temp = 0;
		for (int w = zz; w < n; w++) {
			temp += a[w];
			// cout << "w" << w << " " << temp << endl;
			if (temp > r) {
				// cout << "No" << endl;
				break;
			} else if (temp == p) {
				ww = w + 1;
				cout << "Yes" << endl;
				return 0;
			}
		}
	}

	cout << "No" << endl;
	return 0;
}
