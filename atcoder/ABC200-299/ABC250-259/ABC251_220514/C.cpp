#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

// コンパイル時に
// -lgmpxx -lgmp
// int => mpz_class

struct Submit {
	int num;
	// 提出文字列
	char s[15];
	// 得点
	ll t;
	bool isOriginal;
} submit[100000];

int main(int argc, char **argv) {
	ll n;
	cin >> n;
	// char s[n][15];
	// ll t[n];
	set<string> st;

	for (int i = 0; i < n; i++) {
		char temp_s[15];
		ll temp_t;
		cin >> temp_s >> temp_t;

		auto r = st.insert(temp_s);

		// cout << temp_s << endl;
		// cout << r.second << "\n";

		// decltype(st)::iterator it = st.find(temp_s);
		// if (it != st.end()) {
		if (r.second != true) {
			// temp_t = 0;
			// t[i] = 0;
			submit[i].t = 0;
		} else {
			// t[i] = temp_t;
			submit[i].t = temp_t;
		}

		for (int j = 0; j < strlen(temp_s); j++) {
			// s[i][j] = temp_s[j];
			submit[i].s[j] = temp_s[j];
		}

		submit[i].num = i + 1;
		// for (int j = 0; j < strlen(temp_s); j++) {
		// 	submit[i].s[j] = temp_s[j];
		// }
		// submit[i].t = temp_t;
		// submit[i].isOriginal = true;
	}

	// set善出力
	// cout << "set全出力\n";
	// for (auto itr = st.begin(); itr != st.end(); ++itr) {
	// 	std::cout << *itr << "\n"; // イテレータの指す先のデータを表示
	// }
	// cout << endl;

	// cout << submit[1].s << endl
	// 	 << submit[1].t << endl
	// 	 << endl;

	// for (int i = 0; i < n; i++) {
	// cout << submit[i].t << endl;
	// }
	// cout << endl;

	ll highest_t = 0;
	ll highest_num = 0;
	for (int i = 0; i < n; i++) {
		// cout << submit[i].num << endl;
		// cout << submit[i].s << endl;
		// cout << submit[i].t << endl;
		if (submit[i].t > highest_t) {
			highest_t = submit[i].t;
			highest_num = submit[i].num;
		}
	}

	cout << highest_num << endl;

	return 0;
}
