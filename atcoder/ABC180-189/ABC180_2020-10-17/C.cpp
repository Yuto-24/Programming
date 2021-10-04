#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
// scanf("%d", &x); => std::cin >> x;
// printf("%d\n", x); => std::cout << x << "\n";

bool flag;
int main() {
    int n;
    scanf("%d", &n);
    long long count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d\n",i);
        }
    }

    return 0;
}