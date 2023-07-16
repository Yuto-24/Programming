#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

int main(int argc, char **argv) {
	// cout << fixed << setprecision(10);
	int n;
	char s[50005];
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> s[i];
	}
	s[n + 1] = '\0';

	for (int i = 1; i < n; i++) {
		int lMax = 0;
		for (int k = 1; i + k <= n; k++) {
			if (s[k] != s[i + k]) {
				// cout << "s[" << k << "] :" << s[k]
				//      << " s[" << i + k << "] :" << s[i + k] << endl;
				lMax = k;
				continue;
			} else {
				// cout << s[k] << " " << s[i + k] << endl;
				break;
			}
		}
		cout << lMax << endl;
	}

	return 0;
}
