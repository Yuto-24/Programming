#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

// コンパイル時に
// -lgmpxx -lgmp
// int => mpz_class

int main(int argc, char **argv) {
	char s[105];
	char t[105];
	cin >> s;
	cin >> t;
	int count = 0;
	int where[105];

	for (int i = 0; i < strlen(s); i++) {
		if (s[i] != t[i]) {
			// cout << s[i] << " " << t[i] << endl;
			where[count] = i;
			count++;
		}
	}
	// cout << strlen(s) << endl;
	// cout << where << endl;

	if (count > 2) {
		cout << "No" << endl;
	} else if (count == 0) {
		cout << "Yes" << endl;
	} else {
		if (s[where[0]] == t[where[0] + 1] && t[where[0]] == s[where[0] + 1]) {
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
	}

	return 0;
}
