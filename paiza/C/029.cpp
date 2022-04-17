#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

int main(int argc, char **argv) {
	int m, n;
	int d[40], r[40], rate[40];
	int min_d = 999;
	int min_r = 999;

	cin >> m >> n;
	for (int i = 0; i < m; i++) {
		cin >> d[i] >> r[i];
	}

	for (int i = 0; i < 40; i++) {
		rate[i] = 0;
	}

	for (int i = 0; i < m - n; i++) {
		for (int j = 0; j < n; j++) {
			rate[i] += r[i + j];
		}
		cout << "data:" << d[i] << ", rate:" << rate[i] << endl;
		if (rate[i] < min_r) {
			min_d = d[i];
			min_r = rate[i];
		}
	}

	cout << min_d << " " << min_d + n - 1 << endl;

	return 0;
}
