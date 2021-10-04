#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

int main(int argc, char **argv) {
	int n;
	char s[205][205];
	char t[205][205];
	char s2[205][205];
	char s3[205][205];
	char s4[205][205];
	int count = 0;
	int flag = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> t[i];
	}

	for (int i = 0; i < n; i++) {
		flag = 0;
		for (int j = 0; j < n; j++) {
			if (s[i + 1][j] != t[i][j]) {
				flag = 1;
			}
		}
	}

	// 回転
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			s2[i][j] = s[j][n - i - 1];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			s3[i][j] = s2[j][n - i - 1];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			s4[i][j] = s3[j][n - i - 1];
		}
	}

	// s左詰め
	int count2;
	int flag2 = 0;
	int i_max = 0;
	int j_min = 0;
	for (int i = 0; i < n; i++) {
		count2 = 0;
		for (int j = 0; j < n; j++) {
			if (s[i][j] != '#') {
				count2++;
			} else {
				flag2 = i;
				break;
			}
		}
		if (count2 > i_max) {
			i_max = count2;
		}
		if (flag2) {
			j_min = min(flag2, j_min);
		}
	}

	// 上詰め

	cout << endl;
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << s[i] << endl;
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << s2[i] << endl;
	}

	return 0;
}
