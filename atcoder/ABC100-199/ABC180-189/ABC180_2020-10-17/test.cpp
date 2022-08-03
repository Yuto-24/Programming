// エラトステネスの篩
#define _USE_MATH_DEFINES
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/times.h>  // 構造体tmsを使うために必要.
#include <time.h>
#include <unistd.h>

#define N 1000000

bool list[N];
void Sieve(long long int n) {
    for (int i = 0; i < n; i++) {
        list[i] = true;
    }
    list[0] = false;
    list[1] = false;
    for (int i = 0; i < n; i++) {
        for (int j = 2; j * i < n; j++) {
            if (list[i] == false) break;
            list[j * i] = false;
        }
    }
}

int main() {
    Sieve(N);

    for (long long int i = 0; i < N; i++) {
        if (list[i] == 1) {
            printf("int p%lld = 0\n", i);
        }
    }

    return 0;
}
