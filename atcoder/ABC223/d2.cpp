#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

// コンパイル時に
// -lgmpxx -lgmp
// int => mpz_class

void calc(int *str) {
	
}

int main(int argc, char **argv) {
	// cout << fixed << setprecision(10);
	int n, x;
	cin >> n;

	int l[n];
	int a[n][n];
	for (int i = 0; i < n; i++) {
		cin >> l[i];
		for (int j = 0; j < l[i]; j++) {
			cin >> a[i][j];
		}
	}

	int flag[n];
	int check[n];
	for (int i = 0; i < n; i++) {
		check[i]++;
		if (check[i] == l[i]) {
			l[i] = 0;
			l[i + 1]++;
		}
	}

	return 0;
}
