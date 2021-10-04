#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

// コンパイル時に
// -lgmpxx -lgmp
// int => mpz_class

// printf("%d\n", x); =>
// std::cout << x << "\n";
// scanf("%d", &x); =>
// std::cin >> x;

int main(int argc, char **argv) {
	int n;
	long x[2005];
	long y[2005];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
	}
	int count = 0;

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = i; k < n; k++) {
				if (x[k] == x[j] && y[k] == y[i] && k != i && k != j) {
					for (int l = i; l < n; l++) {
						if (x[l] == x[i] && y[l] == y[j] && k != i && k != j) {
							count++;
							// cout << i + 1 << ", " << j + 1 << ", " << k + 1 << ", " << l + 1 << endl;;
							break;
						}
					}
					break;
				}
			}
		}
	}

	cout << count << endl;

	return 0;
}
