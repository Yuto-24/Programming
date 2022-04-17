#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

// コンパイル時に
// -lgmpxx -lgmp
// int => mpz_class

int main(int argc, char **argv) {
	int s, t, x;
	cin >> s >> t >> x;

	int i = s;
	while (1) {
		if (i == 24) {
			i = 0;
		}
		if (i == t) {
			break;
		}
		if (i == x) {
			cout << "Yes\n";
			return 0;
		}
		i++;
	}

	cout << "No\n";
	return 0;
}
