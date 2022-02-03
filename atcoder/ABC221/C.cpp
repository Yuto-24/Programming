#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

/* 値を入れ替える関数 */
void swap(char *x, char *y) {
	char temp; // 値を一時保存する変数

	temp = *x;
	*x = *y;
	*y = temp;
}

/* バブルソート */
void bubble_sort(char array[], int array_size) {
	int i, j;

	for (i = 0; i < array_size - 1; i++) {
		for (j = array_size - 1; j >= i + 1; j--) { //　右から左に操作
			if (array[j] > array[j - 1]) {
				swap(&array[j], &array[j - 1]);
			}
		}
	}
}

int main(int argc, char **argv) {
	char n[15];
	cin >> n;

	int length = strlen(n);
	int odd;
	if (length % 2 == 0) {
		odd = 0;
	} else {
		odd = 1;
	}

	char str1[10];
	char str2[10];
	long long num1;
	long long num2;
	long long ans;

	// nという文字列をソート
	bubble_sort(n, length);

	// 二つの文字列に移していく
	for (int i = 0; i < length / 2; i++) {
		str1[i] = n[i * 2];
		str2[i] = n[i * 2 + 1];
		str1[i + 1] = '\0';
		str2[i + 1] = '\0';
		// cout << "str1: " << str1 << endl;
		// cout << "str2: " << str2 << endl;
	}

	// 文字列が奇数なら，小さいほうに最後の数を付ける
	if (odd) {
		int temp = length / 2;
		str2[temp] = n[length - 1];
		str2[temp + 1] = '\0';
		// cout << "str2: " << str2 << endl;
	}

	// cout << "str1: " << str1 << endl;
	// cout << "str2: " << str2 << endl;
	ans = atoi(str1) * atoi(str2);
	cout << ans << endl;

	return 0;
}

// 998244353
// 998544332
// 9843
// 95432