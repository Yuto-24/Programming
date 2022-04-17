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
	int a, b, c;
	cin >> a >> b >> c;
	if (a == b) {
		cout << c << endl;
	} else if (b == c) {
		cout << a << endl;
	} else if (a == c) {
		cout << b << endl;
	} else {
		cout << 0 << endl;
	}

	return 0;
}
