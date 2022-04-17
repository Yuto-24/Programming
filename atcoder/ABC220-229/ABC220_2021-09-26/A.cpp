#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

// コンパイル時に
// -lgmpxx -lgmp
// int => mpz_class

// printf("%d\n", x); =>
// std::cout << x << "\n";
// scanf("%d", &x); =>
// std::cin >> x;

int main(int argc, char **argv) {
	int a, b, c;
	cin >> a >> b >> c;
	for (int i = 0; i < 1000; i++) {
		if (c * i >= a && c * i <= b) {
			cout << c * i << endl;
			return 0;
		}
	}
	cout << -1 << endl;

	return 0;
}
