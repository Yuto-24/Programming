#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

int main(int argc, char **argv) {
	// cout << fixed << setprecision(10);
	char a, b;
	cin >> a >> b;
	if (a == 'H') {
		cout << b << endl;
	} else {
		if (b == 'H') {
			cout << 'D' << endl;
		} else {
			cout << 'H' << endl;
		}
	}
	return 0;
}
