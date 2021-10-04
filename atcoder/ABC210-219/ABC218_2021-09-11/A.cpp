#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int


int main(int argc, char **argv) {
	int n;
		// o と x
		char s[10];
	cin >> n;
	cin >> s;

	if (s[n - 1] == 'o') {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	return 0;
}
