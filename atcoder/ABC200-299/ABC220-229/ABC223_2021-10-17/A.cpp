#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

// コンパイル時に
// -lgmpxx -lgmp
// int => mpz_class

int main(int argc, char **argv) {
	int x, y;
	cin >> x >> y;

	int i = 0;
	while (1) {
		if (x >= y) {
			cout << i << endl;
			break;
		}
		x += 10;
		i++;
	}

	return 0;
}
