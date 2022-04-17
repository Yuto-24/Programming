#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

int main(int argc, char **argv) {
	long double m, p, q;
	cin >> m >> p >> q;
	m *= (100.0 - p);
	m *= (100.0 - q);
	m /= 1000;
	cout << m << endl;
	return 0;
}
