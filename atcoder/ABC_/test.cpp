#include <algorithm>
#include <iostream>
using namespace std;

int ctoi(char a) {
	return a - '0';
}

char itoc(int a) {
	return a + '0';
}

string addString(string a, string b) {
	int n = a.size(), carry = 0;
	for (int i = 0; i < n; i++) {
		int num = ctoi(a[a.size() - i - 1]) + ctoi(b[b.size() - i - 1]) + carry;
		carry = num / 10;
		num %= 10;
		b[b.size() - i - 1] = itoc(num);

		int digit = b.size() - n - 1;
		if (i == n - 1 && carry == 1 && digit >= 0) {
			cout << b.size() << " - " << n << " - 1 = " << digit << " = " << b.size() - n - 1 << " ?" << endl;
			int num = ctoi(b[digit]) + carry;
			carry = num / 10;
			num %= 10;
			b[digit] = itoc(num);
		}
	}
	if (carry == 1) {
		b = '1' + b;
	}

	return b;
}

int main() {
	int i = 2;
	string two = "1", one = "1", now = "2";
	while (now.size() < 1000) {
		now = addString(two, one);
		// cout << i + 1 << ' ' << now << endl;
		two = one;
		one = now;
		i++;
	}

	cout << i << endl;
	return 0;
}