#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;

// コンパイル時に
// -lgmpxx -lgmp
// int => mpz_class

// printf("%d\n", x); =>
// std::cout << x << "\n";
// scanf("%d", &x); =>
// std::cin >> x;

int main(int argc, char **argv) {
	long long a, b, k;
	cin >> a >> b >> k;
	char ca[] = "a";
	char cb[] = "b";
	char s[a + b];
	for (int i = 0; i < a; i++) {
		strcat(s, ca);
	}
	for (int i = 0; i < b; i++) {
		strcat(s, cb);
	}
	// cout << s << endl;

	do {
		for (int i = 0; i < 4; i++) {
			cout << s[i];
			if (i != 3) cout << " ";
		}
		cout << endl;
	} while (next_permutation(s, s + a + b));

	return 0;
}
