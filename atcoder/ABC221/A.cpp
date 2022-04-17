#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

// コンパイル時に
// -lgmpxx -lgmp
// int => mpz_class

int main(int argc, char **argv) {
	long long a, b;
	long long dif = 1;
	cin >> a >> b;
	for (int i = 0; i < abs(a - b); i++) {
		dif *= 32;
	}

	cout << dif << endl;
	return 0;
}
