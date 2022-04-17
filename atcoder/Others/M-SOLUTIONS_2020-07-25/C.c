#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    int a[200000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    /* ここまで値の読み込み */

    for (int i = 0; i < (n - k); i++) {
        if (a[i] < a[i + k]) {
            puts("Yes");
        } else {
            puts("No");
        }
    }

    return 0;
}
