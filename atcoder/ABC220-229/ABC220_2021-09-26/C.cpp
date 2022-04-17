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
	cin >> n;
	long long a[100005];
	long long x;
	long long sum_all_a = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum_all_a += a[i];
	}
	cin >> x;

	long long d = x / sum_all_a;
	long long d2 = d * sum_all_a;
	// cout << "sum all a: " << sum_all_a << endl;
	// cout << "d:" << d << endl;
	// cout << "d2:" << d2 << endl;
	d *= n;

	for (int i = 0; i < n; i++) {
		d++;
		d2 += a[i];
		// cout << "d, d2: " << d << ", " << d2 << endl;
		if (d2 > x) {
			break;
		}
	}

	cout << d << endl;

	return 0;
}
