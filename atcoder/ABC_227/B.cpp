#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int
#define fx 4 * a *b + 3 * a + 3 * b

// コンパイル時に
// -lgmpxx -lgmp
// int => mpz_class

int main(int argc, char **argv) {
	int n;
	int s[25];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	int count = 0;

	for (int i = 0; i < n; i++) {
		for (int a = 1; a <= 1000; a++) {
			for (int b = 1; b <= 1000; b++) {
				if (fx == s[i]) {
					count++;
					goto NEXT;
				}
			}
		}
	NEXT:
	i = i;
	}

	cout << n - count << "\n";

	return 0;
}
