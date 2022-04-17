#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
// scanf("%d", &x); => std::cin >> x;
// printf("%d\n", x); => std::cout << x << "\n";

int main() {
    int n, x, t;
    int ans = 0;
    scanf("%d%d%d", &n, &x, &t);
    if (n % x == 0) {
        ans = (n / x) * t;
    } else {
        ans = (n / x) * t + t;
        // printf("%d\n",n % x);
    }

    printf("%d\n", ans);
    return 0;
}