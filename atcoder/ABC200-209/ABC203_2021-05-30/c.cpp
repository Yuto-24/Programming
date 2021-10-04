#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

// コンパイル時に
// -lgmpxx -lgmp
// int => mpz_class

// printf("%d\n", x); =>
// std::cout << x << "\n";F
// scanf("%d", &x); =>
// std::cin >> x;

int main(int argc, char **argv) {
	ll n, k, count;
	ll max[200005];
	count = 0;
	ll a[200005], b[200005], take[200005], t[200005];
	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
		take[a[i]] += b[i];
	}
	for (int i = 0; i < 200000; i++) {
		ll count_temp = count;
		count += k;
		ll temp = k;
		k = 0;
		for (int j = count_temp; j <= count_temp + temp; j++) {
			k += take[j];
		}
		cout << "i:" << i << ", count_temp" << count_temp << ", temp:" << temp + count_temp << ", k:" << k << ", count:" << count << endl;
		i = count - 1;
		if (k <= 0) break;
	}

	cout << count << endl;

	return 0;
}
