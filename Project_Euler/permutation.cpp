#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

int main(int argc, char **argv) {
	// パーミュテーションの実装をしよう
	char s[100];
	cin >> s;
	int len = strlen(s);

	for (int i = 0; i < len; i++) {
		cout << s[i];
	}

	cout << endl;

	cout << s << endl;
	return 0;
}
