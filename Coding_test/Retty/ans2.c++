#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

int solution(int A[], int N) {
	int B[100005];
	int ans = 0;

	B[0] = A[0];
	int min_b = B[0];
	int max_b = B[0];
	if (B[0] == 1) {
		ans++;
	}

	// Start with 1
	for (int i = 1; i < N; i++) {
		// Substitution
		B[i] = A[i];

		// min & max
		if (B[i] < min_b) {
			min_b = B[i];
		}
		if (B[i] > max_b) {
			max_b = B[i];
		}

		// judge
		if (min_b == 1 && max_b == i + 1) {
			ans++;
		}
	}
	return ans;
}

int main(int argc, char **argv) {
	// cout << fixed << setprecision(10);
	int n;
	int a[100005];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout << solution(a, n) << endl;

	return 0;
}
