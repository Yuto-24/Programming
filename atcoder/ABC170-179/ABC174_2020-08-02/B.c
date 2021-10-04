#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    long long int n, d;
    int count = 0;
    long double x[200000];
    long double y[200000];
    scanf("%lld%lld", &n, &d);
    for (int i = 1; i <= n; i++) {
        scanf("%Lf", &x[i]);
        scanf("%Lf", &y[i]);
    }

    for (int i = 1; i <= n; i++) {
        if (sqrt(x[i] * x[i] + y[i] * y[i]) <= d) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}