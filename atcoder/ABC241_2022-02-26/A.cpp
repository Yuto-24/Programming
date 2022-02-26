#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

// コンパイル時に
// -lgmpxx -lgmp
// int => mpz_class

int main(int argc, char **argv) {
	int a[12];
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}

	int first, second, third;
	first = a[0];
	second = a[first];
	third = a[second];

	cout << third << endl;

	return 0;
}
