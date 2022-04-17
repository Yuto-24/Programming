#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

int main() {
	int h, w, k;
	char s[105][105];
	int ch[12];
	int cw[12];
	int nh, nw;
	int count = 0;

	cin >> h >> w >> k;
	for (int i = 0; i < h; i++) {
		cin >> s[i];
	}

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			// if (s[i][j] >= 0 - '0' && s[i][j] < 11 - '0') {
			if (s[i][j] != '#' && s[i][j] != 'N') {
				int temp = s[i][j] - '0';
				// cout << "(" << i << ", " << j << ")" << endl;
				ch[temp] = i;
				cw[temp] = j;
				// count++;
			}
			if (s[i][j] == 'N') {
				nh = i;
				nw = j;
				// cout << "(" << i << ", " << j << ")" << endl;
			}
		}
	}
	// cout << "count: " << count << endl;

	int min[10];
	min[0] = 999999;
	int mincount = 0;
	for (int i = 0; i < k; i++) {
		// temp : N
		int temp = abs(nh - ch[i]) + abs(nw - cw[i]);
		// cout << "distance " << i << ":" << temp << endl;
		if (temp < min[0]) {
			min[0] = temp;
			min[1] = i;
			mincount = 1;
		} else if (temp == min[0]) {
			mincount++;
			min[mincount] = i;
		}
	}
	cout << mincount << endl;
	for (int i = 1; i <= mincount; i++) {
		cout << min[i] << endl;
	}
}