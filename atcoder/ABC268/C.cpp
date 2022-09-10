#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

// 満足度を確認
// int checkSat(int n, int *p, int *q) {
// 	int max_sat = 0;
// 	for (int i = 0; i < n; i++) {
// 		if (q[i] == p[i] || q[i] == p[(i + 1 + n) % n] || q[i] == p[(i - 1 + n) % n]) {
// 			max_sat++;
// 		}
// 	}

// 	return max_sat;
// }

int main() {
	// cout << fixed << setprecision(10);
	int n;
	int max_sat = 0;
	// 料理の位置(料理i)
	int p[200005];
	// 人の位置(人i)
	int q[200005];
	// 距離
	int d[200005];

	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		p[i] = temp;
		q[i] = i;
	}

	// 距離を出す
	for (int i = 0; i < n; i++) {
		d[i] = (p[i] - i + n) % n;
	}

	// 1回転させるごとに満足度を確認
	for (int i = 0; i < n; i++) {
		// max_sat = max(max_sat, checkSat(n, p, q));

		// デバッグ用出力
		// cout << i << ":" << max_sat << endl;

		// 最大値の時点で終了
		// if (max_sat == n) {
		// 	break;
		// }

		// 回転テーブルを反時計回りに1周の1/N回転させる
		int temp = p[n - 1];
		for (int i = n; i > 0; i--) {
			p[i] = p[i - 1];
		}
		p[0] = temp;
	}
	cout << max_sat << endl;
	return 0;
}
