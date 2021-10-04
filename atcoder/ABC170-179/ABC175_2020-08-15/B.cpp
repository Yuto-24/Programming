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
    int l[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &l[i]);
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (i == j) continue;
            for (int k = j; k < n; k++) {
                if (i == k) continue;
                if (j == k) continue;
                if (l[i] == l[j] || l[j] == l[k] || l[i] == l[k]) continue;
                /* 三角形になるかどうか */
                int max = l[i];
                int mid = l[j];
                int midd = l[k];
                if (l[j] > max) {
                    max = l[j];
                    mid = l[i];
                    midd = l[k];
                }
                if (l[k] > max) {
                    max = l[k];
                    midd = l[i];
                    mid = l[j];
                }
                if (max < mid + midd) {
                    count++;
                    // printf("%d %d %d\n",max,mid,midd);
                }
            }
        }
    }

    printf("%d\n", count);
    return 0;
}