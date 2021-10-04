#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>

// scanf("%d", &x); => std::cin >> x;
// printf("%d\n", x); => std::cout << x << "\n";

int main() {
    long long int n;
    scanf("%lld", &n);
    int ans = 0;
    while (n >= 1) {
        ans = n % 10;
        n /= 10;
    }

    if (ans % 9 == 0) {
        puts("Yes");
        return 0;
    }

    puts("No");
    return 0;
}