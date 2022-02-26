#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

int solution(int A) {
	char strA[15];
	char strB[15];
	sprintf(strA, "%d", A);
	// cout << "strA: " << strA << endl;
	int n = strlen(strA);
	// cout << "n: " << n << endl;
	int count = 0;

	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			strB[i] = strA[i / 2];
		} else {
			strB[i] = strA[n - ++count];
			// count++;
		}
	}
	strB[n] = '\0';
	// cout << strB << endl;
	int B = atoi(strB);
	return B;
}

int main(int argc, char **argv) {
	// cout << fixed << setprecision(10);
	ll n;
	cin >> n;
	cout << solution(n) << endl;
	return 0;
}
