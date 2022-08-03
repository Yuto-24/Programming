#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

int main(int argc, char **argv) {
	int k;
	char a[30], b[30];
	cin >> k;
	cin >> a >> b;

	long long c = strtol(a, NULL, k);
	long long d = strtol(b, NULL, k);

	cout << c * d << endl;

	return 0;
}
