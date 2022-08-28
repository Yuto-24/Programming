#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

// コンパイル時に
// -lgmpxx -lgmp
// int => mpz_class

int main(int argc, char **argv) {
	string s;
	cin >> s;
	// int n = s.size();
	cout << s[(s.size()) / 2] << endl;
	return 0;
}
