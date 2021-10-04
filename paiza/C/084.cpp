#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

// コンパイル時に
// -lgmpxx -lgmp
// int => mpz_class

// printf("%d\n", x); =>
// std::cout << x << "\n";
// scanf("%d", &x); =>
// std::cin >> x;

int main(int argc, char **argv) {
	char str[105];
	cin >> str;
	int n = strlen(str);

	for (int i = 0; i < n + 2; i++) {
		cout << '+';
	}
	cout << endl;
	cout << '+' << str << '+' << endl;
	for (int i = 0; i < n + 2; i++) {
		cout << '+';
	}
	cout << endl;

	return 0;
}
