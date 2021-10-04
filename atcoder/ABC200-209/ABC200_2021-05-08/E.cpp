#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;

// printf("%d\n", x); =>
// cout << x << "\n";

// scanf("%d", &x); =>
// cin >> x;

int main(int argc, char **argv) {
	long n, K;
	cin >> n >> K;
	// 和は3~
	// 和が3：1個
	// 和が4：3個
	int s = 2;
	int remain;
	long temp = 0;
	long temp2 = 0;

	// kが属する"和"を求める
	int number = 1;
	while (temp2 < K) {
		temp += number;
		if (temp2 + temp > K) {
			break;
		}
		s++;
		temp2 += temp;
		remain = K - temp2;
		number++;
	}
	// cout << "break" << endl;
	cout << "temp2: " << temp2 << ", s: " << s << ", remain: " << remain << endl;
	cout << "\n";

	// kが属する"和"の内，具体的な値を求める
	long i = 1;
	long j = 1;
	long k = s - 1;
	int count = 0;
	while (remain > 0) {
		cout << "(i, j, k): " << i << " " << j << " " << k << endl;
		if (k-- > 0) {
			j++;
		} else {
			count++;
			k = s - 1 - count;
			j = 1;
			i++;
		}
		remain--;
	}

	cout << i << " " << j << " " << k << endl;

	return 0;
}
