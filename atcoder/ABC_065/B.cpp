#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;

// printf("%d\n", x); =>
// cout << x << "\n";

// scanf("%d", &x); =>
// cin >> x;

int main(int argc, char **argv) {
	int n;
	cin >> n;
	int a[n + 5];
	a[0] = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	int count = 1;

	int i = 1;
	while (count < n) {
		i = a[i];

		if (i == 2) {
			cout << count << endl;
			return 0;
		} else {
			count++;
		}
	}

	cout << -1 << endl;

	return 0;
}
