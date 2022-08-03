#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

// コンパイル時に
// -lgmpxx -lgmp
// int => mpz_class

int main(int argc, char **argv) {
	char s[10];
	cin >> s;
	// cout << strlen(s) << endl;
	char s2[10];
	for (int i = 0; i < 6; i++) {
		s2[i] = s[i % strlen(s)];
	}
	s2[6] = '\0';

	cout << s2 << endl;

	return 0;
}
