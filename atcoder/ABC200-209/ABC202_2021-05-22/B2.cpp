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

int sizes(char s[]) {
	int ans = 0;
	int i = 0;
	while (s[i] != '\0') {
		i++;
		ans++;
	}
	return ans;
}

int main(int argc, char **argv) {
	char s[100005];
	cin >> s;
	// cout << sizes(s) << endl;
	for (int i = sizes(s) - 1; i >= 0; i--) {
		if (s[i] == '9') {
			cout << '6';
		} else if (s[i] == '6') {
			cout << '9';
		} else {
			cout << s[i];
		}
	}
	cout << endl;
	return 0;
}
