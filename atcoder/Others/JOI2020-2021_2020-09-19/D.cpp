#include <bits/stdc++.h>
using namespace std;
// 素因数分解
template <typename T>
map<T, T> prime_factor(T n) {
    map<T, T> ret;
    for (T i = 2; i * i <= n; i++) {
        T tmp = 0;
        while (n % i == 0) {
            tmp++;
            n /= i;
        }
        ret[i] = tmp;
    }
    if (n != 1) ret[n] = 1;
    return ret;
}
/*  divisor_num(n)
    入力：整数 n
    出力：nの約数の個数
    計算量：O(√n)
*/
template <typename T>
T divisor_num(T N) {
    map<T, T> pf = prime_factor(N);
    T ret = 1;
    for (auto p : pf) {
        ret *= (p.second + 1);
    }
    return ret;
}




int main() {
    long long int n;
    long long int ab;
    long long int ans = 0;
    scanf("%lld", &n);
    for (long long int c = 1; c < n; c++) {
        ab = n - c;
        // printf("ab:%lld\tc:%lld\n", ab, c);

        ans += divisor_num(ab);
    }

    cout << ans << endl;
    return 0;
}

