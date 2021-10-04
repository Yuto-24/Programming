#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;

void swap_mine(char *a, char *b) {
	char temp = *a;
	a = b;
	*b = temp;
}

int main(int argc, char **argv) {
	long long n, q;
	cin >> n;

	string s, s1, s2;
	cin >> s;
	s1 = s.substr(0, n);
	s2 = s.substr(n);

	cin >> q;
	long long t;
	long long count_t = 0;
	long long a, b;
	for (int i = 0; i < q; i++) {
		cin >> t >> a >> b;
		if (t == 1) {
			if (a <= n && b <= n) {
				swap(s1[a - 1], s1[b - 1]);
			} else if (a > n && b > n) {
				a -= n;
				b -= n;
				swap(s2[a - 1], s2[b - 1]);
			} else if (a <= n && b > n) {
				b -= n;
				swap(s1[a - 1], s2[b - 1]);
			} else if (a > n && b <= n) {
				a -= n;
				swap(s2[a - 1], s1[b - 1]);
			}
		} else {
			swap(s1, s2);
		}
		// cout << s1 << s2 << endl;
	}

	cout << s1 << s2 << endl;

	return 0;
}
