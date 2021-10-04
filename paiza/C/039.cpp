#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

int main(int argc, char **argv) {
	char str[105];
	cin >> str;
	int ans = 0;

	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == '/') {
			ans++;
		} else if (str[i] == '<') {
			ans += 10;
		}
	}

	cout << ans << endl;

	return 0;
}
