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
    long long int x[n];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &x[i]);
    }

    long long int m = 0, c = 0;
    double y = 0;

    for (int i = 0; i < n; i++) {
        m += abs(x[i]);
        y += x[i] * x[i];
        if (c < abs(x[i])) {
            c = abs(x[i]);
        }
    }

    y = sqrt(y);

    printf("%lld\n",m);
    printf("%.15f\n",y);
    printf("%lld\n",c);

    return 0;
}

// マンハッタン距離： |x1| + … + |xN|
// ユークリッド距離： √|x1|^2 + … + |xN|^2
// チェビシェフ距離： max(|x1|, … ,|xN|)
