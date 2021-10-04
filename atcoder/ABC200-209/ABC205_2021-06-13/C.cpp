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
	ll a, b, c;
	cin >> a >> b >> c;

	if (a >= 0 && b >= 0 || c % 2 == 0) {
		a = abs(a);
		b = abs(b);
		if (a < b) {
			cout << "<" << endl;
		} else if (a == b) {
			cout << "=" << endl;
		} else {
			cout << ">" << endl;
		}
	} else if (a < 0 && b >= 0) {
		cout << "<" << endl;
	} else if (a < 0 && b < 0) {
		a = abs(a);
		b = abs(b);
		if (a > b) {
			cout << "<" << endl;
		} else if (a = b) {
			cout << "=" << endl;
		} else {
			cout << ">" << endl;
		}
	} else {
		cout << ">" << endl;
	}

	return 0;
}
