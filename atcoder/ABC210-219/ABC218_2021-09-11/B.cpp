#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

int main(int argc, char **argv) {
	int p[30];
	for (int i = 0; i < 26; i++) {
		cin >> p[i];
	}

	for (int i = 0; i < 25; i++) {
		char ans = 'a';
		ans += p[i] - 1;
		printf("%c", ans);
	}
	printf("%c\n", 'a' + p[25] - 1);

	return 0;
}
