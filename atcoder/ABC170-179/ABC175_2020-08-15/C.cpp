#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
// scanf("%lld", &x); => std::cin >> x;
// printf("%lld\n", x); => std::cout << x << "\n";

long long int PlusOrMinusD(long long int x, long long int d) {
    if (llabs(x - d) < llabs(x + d)) {
        x -= d;
    } else {
        x += d;
    }
    return x;
}

void IfNotOver0(long long x, long long k, long long d) {
    x = llabs(x);
    if (x > 0 && x - (k * d) >= 0) {
        x -= (k * d);
        printf("%lld\n", x);
        exit(0);
    }
}

int main() {
    long long int x, k, d;
    scanf("%lld%lld%lld", &x, &k, &d);
    IfNotOver0(x, k, d);

    for (int i = 0; i < k; i++) {
        x = PlusOrMinusD(x, d);
        // printf("x: %lld\n", x);

        // 既に最小であれば
        if (x <= abs(x - d) && x <= abs(x + d)) {
            // printf("mode change\n");
            if ((k - i) % 2 == 1) {
                x = abs(x);
                printf("%lld\n", x);
                return 0;
            } else {
                x = abs(PlusOrMinusD(x, d));
                printf("%lld\n", x);
                return 0;
            }
        }
    }
    x = abs(x);
    printf("%lld\n", x);
    return 0;
}