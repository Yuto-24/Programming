#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

int main() {
	int n, m, ans = 0;
	cin >> n >> m;
	int a[m][n];
	int b[n][n];

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			b[i][j] = 1;
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n - 1; j++) {
			b[a[i][j] - 1][a[i][j + 1] - 1] = 0;
			b[a[i][j + 1] - 1][a[i][j] - 1] = 0;

			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
				}
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (b[i][j] == 1) {
				ans++;
			}
		}
	}

	cout << ans << endl;

	return 0;
}
