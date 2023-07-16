#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

int main() {
	ll n, d;
	cin >> n >> d;
	ll count = 0;
	for (ll i = 0; i < n; i++) {
		ll tempX, tempY;
		cin >> tempX >> tempY;
		long double distance = sqrt(tempX * tempX + tempY * tempY);
		if (distance <= d) {
			// cout << distance << endl;
			count++;
		}
	}

	cout << count << endl;

	return 0;
}
