#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

int main(int argc, char **argv) {
	char s[105];
	cin >> s;
	char after[105];
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == 'A') {
			after[i] = '4';
		} else if (s[i] == 'E') {
			after[i] = '3';
		} else if (s[i] == 'G') {
			after[i] = '6';
		} else if (s[i] == 'I') {
			after[i] = '1';
		} else if (s[i] == 'O') {
			after[i] = '0';
		} else if (s[i] == 'S') {
			after[i] = '5';
		} else if (s[i] == 'Z') {
			after[i] = '2';
		} else {
			after[i] = s[i];
		}
	}
	after[strlen(s)] = '\0';

	cout << after << endl;

	return 0;
}
