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

int countE(int n) {
	int count = 0;
	for (int i = n; i >= 1; i /= 10) {
		count++;
	}
	return count;
}

int pow2(int a, int b) {
	int ans = 1;
	for (int i = 0; i < b; i++) {
		ans *= a;
	}
	return ans;
}

int main(int argc, char **argv) {
	int n;
	cin >> n;
	int count = countE(n);
	cout << "count: " << count << endl;

	for (int i = count; i > 0; i--) {
		int m = n % 10;
		cout << "m: " << m << endl;
		if (m == 9) {
			m = 6;
		} else if (m == 6) {
			m = 9;
		}
		cout << m;
		n / 10;
	}
	cout << endl;

	return 0;
}
