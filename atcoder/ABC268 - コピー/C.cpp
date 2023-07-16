#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

int main() {
	// cout << fixed << setprecision(10);
	int n;
	int max_sat = 0;
	// 料理の位置(料理i)
	int p[200005];
	// 距離
	int d[200005];
	// 距離が出た回数
	int d2[200005];

	// 標準入力
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		p[temp] = i;
	}

	// 距離を出す
	// d2[i]には[MOD距離i]が出た回数が入る
	for (int i = 0; i < n; i++) {
		d[i] = (p[i] - i + n) % n;
		d2[d[i]]++;
	}

	// デバッグはじめ
	cout << "   i : ";
	for (int i = 0; i < n; i++) {
		cout << i << " ";
	}
	cout << endl
	     << " p[i]: ";
	for (int i = 0; i < n; i++) {
		cout << p[i] << " ";
	}
	cout << endl
	     << " d[i]: ";
	for (int i = 0; i < n; i++) {
		cout << d[i] << " ";
	}
	cout << endl
	     << "d2[i]: ";
	for (int i = 0; i < n; i++) {
		cout << d2[i] << " ";
	}
	cout << endl;
	// デバッグ終わり

	for (int i = 0; i < n; i++) {
		int max_temp = d2[i] + d2[(i + 1) % n] + d2[(i + 2) % n];
		// cout << i << " " << max_temp << endl;
		max_sat = max(max_sat, max_temp);
	}

	cout << max_sat << endl;

	return 0;
}
