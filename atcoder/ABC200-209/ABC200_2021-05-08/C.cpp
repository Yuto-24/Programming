#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;

// コンパイル時に
// -lgmpxx -lgmp
// int => mpz_class

int main(int argc, char **argv) {
	long n;
	cin >> n;
	long long a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	long count = 0;

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if ((a[i] - a[j]) % 200 == 0) {
				count++;
			}
		}
	}

	cout << count << endl;

	return 0;
}
