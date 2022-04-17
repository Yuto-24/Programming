#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

int main(int argc, char **argv) {
	int n;
	int f[105];
	int ans;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> f[i];
	}

	ans = f[0] - 1;
	for (int i = 1; i < n; i++) {
		ans += abs(f[i] - f[i - 1]);
	}

	cout << ans << endl;

	return 0;
}
