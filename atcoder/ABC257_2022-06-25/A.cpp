#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

int main() {
	int n, x;
	cin >> n >> x;

	int count = 0;

	char str[26500];
	for (int tmp = 0; tmp <= 26; tmp++) {
		for (int j = 0; j < n; j++) {
			str[count] = 'A' + tmp;
			// cout << str[count] << " ";
			count++;
		}
	}
	// cout << endl;

	cout << str[x - 1] << endl;

	return 0;
}
