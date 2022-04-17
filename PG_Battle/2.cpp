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
	char x[200000];
	cin >> x;
	int flag = 0;
	for (int i = 0; i < strlen(x); i++) {
		if (flag) {
			x[i] = '1';
		}
		if (flag == 0 && x[i] == '0') {
			flag = 1;
			x[i] = '1';
		}
	}
	cout << x << endl;
	return 0;
}
