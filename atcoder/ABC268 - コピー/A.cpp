#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

int main(int argc, char **argv) {
	// cout << fixed << setprecision(10);
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;

	// 整数の種類を数える
	set<int> s;
	s.insert(a);
	s.insert(b);
	s.insert(c);
	s.insert(d);
	s.insert(e);
	cout << s.size() << endl;

	return 0;
}
