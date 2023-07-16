#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
// scanf("%d", &x); => std::cin >> x;
// printf("%d\n", x); => std::cout << x << "\n";

int main() {
    int n;
    scanf("%d", &n);
    int ary[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &ary[i]);
    }

    long long ans = 0;
    for (int i = 1; i < n; i++) {
        if (ary[i] < ary[i - 1]) {
            ans += (ary[i - 1] - ary[i]);
            ary[i] += (ary[i - 1] - ary[i]);
        }
    }

    printf("%lld\n", ans);
    return 0;
}