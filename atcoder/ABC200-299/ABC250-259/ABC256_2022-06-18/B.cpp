#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

int main(int argc, char **argv) {
    // cout << fixed << setprecision(10);

    int p = 0;
    int a[105];
    int score[105];
    int n;

    cin >> n;
    for (int i = 0; i < n; i++) {
        score[i] = 0;
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            score[i] += a[j];
        }
    }

    for (int i = 0; i < n; i++) {
        // cout << a[i] << " ";
    }
    // cout << endl;
    for (int i = 0; i < n; i++) {
        // cout << score[i] << " ";
        if (score[i] >= 4) {
            p++;
        }
    }
    // cout << endl;

    cout << p << endl;

    return 0;
}
