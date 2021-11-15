#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

// コンパイル時に
// -lgmpxx -lgmp
// int => mpz_class

int main(int argc, char **argv) {
	int n, k, a;
	cin >> n >> k >> a;
	int person = a - 1;
	for (int i = 0; i < k; i++) {
		person++;
		if (person > n) {
			person = 1;
		}
	}

	cout << person << "\n";
	return 0;
}
