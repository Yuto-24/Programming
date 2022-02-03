#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

// コンパイル時に
// -lgmpxx -lgmp
// int => mpz_class

int main(int argc, char **argv) {
	int n;
	int p;
	cin >> n >> p;
	int a[100005];
	int count = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] < p) {
			count++;
		}
	}

	cout << count << endl;

	return 0;
}
