#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

// コンパイル時に
// -lgmpxx -lgmp
// int => mpz_class

int match(char a, char b) {
	// bが勝ちなら1, それ以外なら-1を返す
	if (a == 'G') {
		if (b == 'P') {
			return 1;
		} else {
			return -1;
		}
	} else if (a == 'C') {
		if (b == 'G') {
			return 1;
		} else {
			return -1;
		}
	} else {
		if (b == 'C') {
			return 1;
		} else {
			return -1;
		}
	}
}

int main(int argc, char **argv) {
	int n, m;
	cin >> n >> m;
	// a[初期番号][ラウンド][順位]
	char a[110][105];
	for (int i = 0; i < 2 * n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}

	// order[順位]の人
	int order[110];
	// 人iの勝利数
	int vicnum[110];
	for (int i = 0; i < 2 * n; i++) {
		order[i] = i;
	}
	for (int i = 0; i < 2 * n; i++) {
		vicnum[i] = 0;
	}

	// 前後比較
	// jラウンドにおいて
	for (int j = 0; j < m; j++) {
		// 2 * i位 と 2 * i + 1位を比較
		for (int i = 0; i < n; i++) {
			if (match(a[order[2 * i]][j], a[order[2 * i + 1]][j]) == 1) {
				vicnum[order[2 * i]]++;
			} else if (match(a[order[2 * i + 1]][j], a[order[2 * i]][j]) == 1) {
				vicnum[order[2 * i + 1]]++;
			}
		}
		cout << "At round " << j + 1 << endl;
		for (int i = 0; i < 2 * n; i++) {
			cout << order[i] + 1 << endl;
		}
	}

	cout << "Result" << endl;
	for (int i = 0; i < 2 * n; i++) {
		cout << order[i] + 1 << endl;
	}

	// cout << match('G', 'G') << endl;
	// cout << match('C', 'C') << endl;
	// cout << match('P', 'P') << endl;

	return 0;
}
