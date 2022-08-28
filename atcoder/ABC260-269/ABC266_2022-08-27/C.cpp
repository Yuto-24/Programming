#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

// 3つの座標がなす角が180度未満であるかを判定する
bool is_under_180(ll x1, ll y1, ll x2, ll y2, ll x3, ll y3) {
	ll a = (x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1);
	if (a < 0) {
		return false;
	}
	return true;
}

int main(int argc, char **argv) {
	int ax, ay, bx, by, cx, cy, dx, dy;
	cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy;
	bool is_b = is_under_180(ax, ay, bx, by, cx, cy);
	bool is_c = is_under_180(bx, by, cx, cy, dx, dy);
	bool is_d = is_under_180(cx, cy, dx, dy, ax, ay);
	bool is_a = is_under_180(dx, dy, ax, ay, bx, by);
	if (is_a && is_b && is_c && is_d) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	return 0;
}
