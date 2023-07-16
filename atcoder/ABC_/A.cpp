#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int
#define ld long double

int main(int argc, char **argv) {
	int x;
	cin >> x;
	char s[x], t[x];
	cin >> s >> t;

	for (int i = 0; i < x; i++) {
		if (s[i] != t[i]) {
			if (s[i] == '1' && t[i] == 'l') {
				continue;
			} else if (s[i] == 'l' && t[i] == '1') {
				continue;
			} else if (s[i] == '0' && t[i] == 'o') {
				continue;
			} else if (s[i] == 'o' && t[i] == '0') {
				continue;
			}
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;

	return 0;
}
