#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

int main(int argc, char **argv) {
	// cout << fixed << setprecision(10);
	string s, t;
	cin >> s >> t;
	int n = s.size();
	int m = t.size();

	for (int i = 0; i < n; i++) {
		if (s[i] != t[i]) {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;

	return 0;
}
