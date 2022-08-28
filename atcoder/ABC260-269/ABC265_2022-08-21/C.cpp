#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

int main(int argc, char **argv) {
	int h, w;
	char g[505][505];
	bool visited[505][505];
	cin >> h >> w;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cin >> g[i][j];
			visited[i][j] = false;
		}
	}

	int i = 0, j = 0;

	while (true) {
		if (!visited[i][j]) {
			visited[i][j] = true;
		} else {
			cout << -1 << endl;
			return 0;
		}
		if (g[i][j] == 'U' && i != 0) {
			i -= 1;
		} else if (g[i][j] == 'D' && i != h - 1) {
			i += 1;
		} else if (g[i][j] == 'L' && j != 0) {
			j -= 1;
		} else if (g[i][j] == 'R' && j != w - 1) {
			j += 1;
		} else {
			break;
		}
	}
	cout << i + 1 << " " << j + 1 << endl;
	return 0;
}
