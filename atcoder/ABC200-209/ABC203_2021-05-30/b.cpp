#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;

// コンパイル時に
// -lgmpxx -lgmp
// int => mpz_class

// printf("%d\n", x); =>
// std::cout << x << "\n";
// scanf("%d", &x); =>
// std::cin >> x;

int main(int argc, char **argv) {
	int n, k;
	cin >> n >> k;
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= k; j++) {
			ans += 100 * i + j;
			// cout << 100 * i + j << endl;
		}
	}

	cout << ans << endl;

	return 0;
}
