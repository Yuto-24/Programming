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
	int k;
	char a[10], b[10];
	cin >> k;
	cin >> a >> b;

	int alen = strlen(a);
	int blen = strlen(b);
	// cout << alen << endl;
	// cout << blen << endl;

	long long c, d;
	c = 0;
	d = 0;
	for (int i = 0; i < alen; i++) {
		c += pow(k, i) * ((int)a[abs(alen - 1 - i)] - 48);
		// cout << "i: " << i << "c: " << c << endl;
	}
	for (int i = 0; i < blen; i++) {
		d += pow(k, i) * ((int)b[abs(blen - 1 - i)] - 48);
		// cout << "i: " << i << "d: " << d << endl;
	}

	// cout << "result" << endl;
	cout << c << endl;
	cout << d << endl;
	cout << c * d << endl;

	return 0;
}
