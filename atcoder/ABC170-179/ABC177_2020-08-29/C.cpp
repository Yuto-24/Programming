#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
// scanf("%d", &x); => std::cin >> x;
// printf("%d\n", x); => std::cout << x << "\n";

#define MOD 1000000007

int main() {
    long long int n;
    scanf("%lld", &n);

    long long int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }

    long long ans = 0;

    for (int i = 0; i < n; i++) {
        for (int j = (i + 1); j < n; j++) {
            ans += a[i] * a[j] % MOD;
            ans %= MOD;
            // printf("%lld\n",ans);
        }
    }

    printf("%lld\n", ans);
    return 0;
}