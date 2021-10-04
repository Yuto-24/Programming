#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
// scanf("%d", &x); => std::cin >> x;
// printf("%d\n", x); => std::cout << x << "\n";
#include <vector>
using namespace std;

int main() {
    long long int n;
    long long int ab;
    long long int ans = 0;
    scanf("%lld", &n);
    for (long long int c = 1; c < n; c++) {
        ab = n - c;
        // printf("ab:%lld\tc:%lld\n", ab, c);

        for (int i = 1; i * i <= ab; i++) {
            // printf("i: %d\n", i);
            if (ab % i == 0) {
                ans++;
                int j = ab / i;
                if (j != i) ans++;
            }
        }
    }

    printf("%lld\n", ans);
    return 0;
}
