#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

// コンパイル時に
// -lgmpxx -lgmp
// int => mpz_class

ll myfib(int n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	ll ary[n + 5];
	ary[1] = 1;
	ary[2] = 1;

	for (int i = 3; i <= n; i++) {
		ary[i] = ary[i - 1] + ary[i - 2];
	}
	return ary[n];
}

int main(int argc, char **argv) {
	int n;
	cin >> n;
	ll ans = myfib(n);
	cout << "ans: " << ans << endl;
	return 0;
}
