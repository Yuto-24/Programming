#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

// コンパイル時に
// -lgmpxx -lgmp
// int => mpz_class

int main(int argc, char **argv) {
	ll k;
	cin >> k;
	// input end;

	// kが2の何乗か求める
	// n = num_index_of_2;
	ll n = 0;
	for (ll i = 0;; i++) {
		if (pow(2, n + 1) > k) {
			break;
		} else {
			// cout << "2^" << n + 1 << " < " << k << "\n";
		}
		n++;
	}
	// cout << "num_index_of_2: " << n << "\n";
	// kを2^n + bの形で表す．
	ll b = k - pow(2, n);
	// cout << k << " = 2^" << n << " + " << b << "\n";

	// bを二進に変換 => str_d
	char str_d[1000];
	int count_dig = 0;
	for (ll i = b; i > 0; i /= 2) {
		ll temp = (i % 2);
		str_d[count_dig] = temp + '0';
		// cout << "debug[int: " << temp << " char: " << str_d[count_dig] << "]\n";
		count_dig++;
	}
	// cout << "count: " << count_dig << "\n";
	str_d[count_dig + 1] = '\0';
	// cout << "str_d: " << str_d << "\n";

	// str_dの前後入れ替え
	char str_b[1000];
	for (int i = 0; i < count_dig; i++) {
		str_b[i] = str_d[count_dig - i - 1];
	}
	str_b[count_dig + 1] = '\0';

	// cout << b << " = " << str_b << " (2)\n";
	// cout << "count_dig: " << count_dig << "\n";

	// // dを文字列に変換 => str_b
	// char str_b[100];
	// for (int i = 0; i < count_dig; i++) {
	// 	int dd = d % 10;
	// 	str_b[i] = dd + '0';
	// 	d /= 10;
	// }
	// str_b[count_dig] = '\0';
	// cout << str_b << "\n";

	// 文字列の用意
	char str[100];
	str[0] = '2';
	for (int i = 1; i <= n; i++) {
		str[i] = '0';
	}
	// str[n] = '\0';
	// cout << str << "\n";

	// 文字str_bの値によって，結果を代入
	for (int i = 1; i <= n; i++) {
		if (str_b[n - i] == '1') {
			str[i] = '2';
		}
	}
	cout << str << "\n";

	return 0;
}
