#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int wal = 1000;
    for (int i = 0; i < n; i++) {
        if (a[i] == a[i + 1]) {
            // 何もしない
        } else if (a[i] > a[i + 1] && i != n - 1) {
            // 売れるだけ売る
            while (wal > a[i]) {
                wal / a[i];
            }

        } else if (a[i] < a[i + 1] || i == n - 1) {
            // 買えるだけ買う
        }
    }

    return 0;
}
