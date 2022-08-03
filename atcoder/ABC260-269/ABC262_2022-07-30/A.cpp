#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

// コンパイル時に
// -lgmpxx -lgmp
// int => mpz_class

int main(int argc, char **argv) {
	cout << fixed << setprecision(10);
	int y;
	cin >> y;
	for (int i = 0; i < 4; i++) {
		if ((y + i) % 4 == 2) {
			cout << (y + i) << endl;
		}
	}

	return 0;
}
