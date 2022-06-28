#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

void printAll(int k, int *a) {
	for (int i = 1; i <= k - 1; i++) {
		cout << a[i] << " ";
	}
	cout << a[k] << endl;
}

int main() {
	int n, k, q;
	int a[215];
	int l[215];
	cin >> n >> k >> q;

	for (int i = 0; i < 215; i++) {
		a[i] = 0;
	}

	// 左からN番目
	int count = 1;
	for (int i = 0; i < k; i++) {
		cin >> a[count];
		count++;
	}

	for (int i = 0; i < q; i++) {
		cin >> l[i];
	}
	// input end
	// printAll(k, a);

	for (int i = 0; i < q; i++) {
		if (a[l[i]] != n) {                                 // 一番右のマスでは無いか
			if (l[i] != k && a[l[i]] + 1 != a[l[i] + 1]) {  // 右のマスにコマが無いか
				a[l[i]]++;
			} else if (l[i] == k && a[l[i]] != n) {
				a[l[i]]++;
			}
		}
	}
	printAll(k, a);

	return 0;
}
