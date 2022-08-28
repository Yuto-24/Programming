#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

int main(int argc, char **argv) {
	cout << fixed << setprecision(10);
	long double expected[105];
	expected[0] = 3.5;
	int n;
	cin >> n;

	long double temp = expected[0];
	for (int i = 0; i < n; i++) {
		temp = 0;
		for (int j = 1; j < 7; j++) {
			if (i == 0) {
				temp += j;
			} else {
				if (j < expected[i - 1]) {
					temp += expected[i - 1];
				} else {
					temp += j;
				}
			}
		}
		expected[i] = temp / 6.0;
	}

	cout << expected[n - 1] << endl;
	return 0;
}
