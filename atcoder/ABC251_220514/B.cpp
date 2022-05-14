#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

// コンパイル時に
// -lgmpxx -lgmp
// int => mpz_class

int main(int argc, char **argv) {
	ll n, w;
	ll a[305];

	cin >> n >> w;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	bool count[3000000];
	ll count_true = 0;
	int temp;

	for (int i = 0; i < n; i++) {
		temp = a[i];
		if (temp <= w && count[temp] == false) {
			count_true++;
			count[temp] = true;
		}
		for (int j = i + 1; j < n; j++) {
			temp = a[i] + a[j];
			if (temp <= w && count[temp] == false) {
				count_true++;
				count[temp] = true;
			}
			for (int k = j + 1; k < n; k++) {
				temp = a[i] + a[j] + a[k];
				if (temp <= w && count[temp] == false) {
					count_true++;
					count[temp] = true;
				}
			}
		}
	}

	cout << count_true << endl;

	return 0;
}
