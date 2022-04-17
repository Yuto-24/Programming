#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

// コンパイル時に
// -lgmpxx -lgmp
// int => mpz_class

typedef struct {
	// 3日までの合計点数
	ll sum;
	ll rank;
	// bool operator<(const result &right) const {
	// 	return sum == right.sum ? rank < right.rank : sum < right.sum;
	// }
} result;

int compare_ll(const void *a, const void *b) {
	return *(int *)a - *(int *)b;
}

int main() {
	ll k, n;
	// result r[100005];
	vector<result> data_array(100005);

	cin >> n >> k;
	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < 3; j++) {
			ll temp;
			cin >> temp;
			data_array[i].sum += temp;
		}
	}
	cout << "Before\n";
	for (int i = 0; i < n; i++) {
		cout << data_array[i].sum << endl;
	}

	// sort(r, r + n);
	sort(data_array.begin(), data_array.end(),
		 [](const result &a, const result &b) { return a.sum < b.sum; });
	for (int i = 0; i < n; i++) {
		cout << data_array[i].sum << endl;
	}

	cout << "\n";

	return 0;
}
