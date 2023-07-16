#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

int main() {
	// cout << fixed << setprecision(10);
	ll n;
	char s[100005][10], t[100005][10];
	set<string> st_s;
	set<string> st_t;
	set<string> st_st;
	cin >> n;
	for (ll i = 0; i < n; i++) {
		cin >> s[i] >> t[i];
		st_s.insert(s[i]);
		st_t.insert(t[i]);
		st_st.insert(s[i]);
		st_st.insert(t[i]);
	}

	// cout << st_s.size() << " " << st_t.size() << " " << st_st.size() << endl;

	if (st_s.size() == st_st.size()) {
		cout << "No" << endl;
	// } else if (st_s.size() < st_t.size()) {
	// 	cout << "No" << endl;
	} else {
		cout << "Yes" << endl;
	}

	return 0;
}
