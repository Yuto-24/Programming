#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

vector<vector<long long>> comb(int n, int r) {
	vector<vector<long long>> v(n + 1, vector<long long>(n + 1, 0));
	for (int i = 0; i < v.size(); i++) {
		v[i][0] = 1;
		v[i][i] = 1;
	}
	for (int j = 1; j < v.size(); j++) {
		for (int k = 1; k < j; k++) {
			v[j][k] = (v[j - 1][k - 1] + v[j - 1][k]);
		}
	}
	return v;
}

int main(int argc, char **argv) {
	ll r, g, b, k;
	cin >> r >> g >> b >> k;
	ll sum = r + g + b - k;
	r -= k;
	g -= k;

	// print(factorial(sum) / factorial(s[0]) / factorial(s[1]) / factorial(s[2]))
	// print((comb(sum, s[0]) * comb(sum - s[0], s[1]) * comb(sum - s[0] - s[1], s[2])) % 998244353)
	cout << comb(sum, r) * comb(sum - r, g) * comb(sum - r - g, b) % 998244353 << endl;

	return 0;
}
