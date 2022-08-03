#define _USE_MATH_DEFINES
#include <assert.h>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
using namespace std;

int main(int argc, char **argv) {
	long long n, q;
	cin >> n;
	char s[2 * n + 5];
	cin >> s;
	cin >> q;
	long long t[q];
	long long a[q];
	long long b[q];
	for (int i = 0; i < q; i++) {
		cin >> t[i] >> a[i] >> b[i];
	}



	for (int i = 0; i < q; i++) {
		if (t[i] == 1) {
			char temp = s[a[i] - 1];
			s[a[i] - 1] = s[b[i] - 1];
			s[b[i] - 1] = temp;
			// cout << s << endl;
		} else {
			// t = 2
			char str[n];
			strcpy(str, s);
			str[n] = '\0';
			// cout << str << endl;

			char str2[n];
			strcpy(str2, s + n);
			str2[n] = '\0';
			// cout << str2 << endl;

			strcat(str2, str);
			// cout << str2 << endl;

			s[0] = '\0';
			strcat(s, str2);
			// cout << s << endl;
		}
	}
	cout << s << endl;
	return 0;
}
