#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

// コンパイル時に
// -lgmpxx -lgmp
// int => mpz_class

int main(int argc, char **argv) {
	ll n;
	cin >> n;
	set<string> st;

	for (int i = 0; i < n; i++) {
		char temp[15];
		int temp2;
		cin >> temp >> temp2;
		st.insert(temp);
		auto r = st.insert(temp);
	}

	// set善出力
	cout << "set全出力\n";
	for (auto itr = st.begin(); itr != st.end(); ++itr) {
		std::cout << *itr << "\n"; // イテレータの指す先のデータを表示
	}
	cout << endl;

	return 0;
}
