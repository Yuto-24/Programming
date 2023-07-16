#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

int main(int argc, char **argv) {
	// cout << fixed << setprecision(10);
	int a, b;
	cin >> a >> b;
	int small = min(a, b);
	int big = max(a, b);
	if (big == small * 2 || big == small * 2 + 1) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	
	return 0;
}
