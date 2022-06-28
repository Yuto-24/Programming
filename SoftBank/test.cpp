#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

void plus_min(int *h, int *m, int p) {
    cout << *h << ":" << *m << endl;
    *m += p;
    cout << *h << ":" << *m << endl;
    if (*m >= 60) {
        *h += 1;
        *m %= 60;
        cout << *h << ":" << *m << endl;
    }
}

int main() {
    int h = 3;
    int m = 59;
    plus_min(&h, &m, 10);
    cout << h << ":" << m << endl;
}