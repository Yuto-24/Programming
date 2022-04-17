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
	int n;
	cin >> n;
	int data;
	int a[n + 5];
	int b[n + 5];
	int c[n + 5];
	for (int i = 0; i < (n + 5); i++) {
		a[i] = 0;
		b[i] = 0;
		c[i] = 0;
	}

	for (int i = 1; i <= n; i++) {
		cin >> data;
		a[data]++;
	}
	for (int i = 1; i <= n; i++) {
		cin >> data;
		b[i] = a[data];
	}
	for (int i = 1; i <= n; i++) {
		cin >> data;
		c[i] = data;
	}
	// input end

	long ans = 0;
	for (int i = 1; i <= n; i++) {
		ans += b[c[i]];
	}

	cout << ans << endl;

	return 0;
}
