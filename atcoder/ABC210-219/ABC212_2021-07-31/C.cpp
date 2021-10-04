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

int compare_int(const void *a, const void *b) {
	return *(int *)a - *(int *)b;
}

int main(int argc, char **argv) {
	long n, m;
	cin >> n >> m;
	long long a[200010], b[200010];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cout << "a[i]:" << a[i] << endl;
	}
	cout << "a:" << a << ";" << endl;
	qsort(a, n, sizeof(int), compare_int);
	cout << "a:" << a << ";" << endl;

	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	qsort(b, n, sizeof(int), compare_int);

	long min = 99999;
	int s, t;
	s = 0;
	t = 0;
	while (s < n) {
		if (a[s] > b[t]) {
			t++;
		} else {
			s++;
		}
		if (abs(a[s] - b[t]) < min) {
			min = abs(a[s] - b[t]);
		}
		if (min == 0) {
			cout << 0 << endl;
			return 0;
		}
	}
	cout << min << endl;

	return 0;
}
