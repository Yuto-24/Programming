#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

// エラトステネスの篩

#define N 1000000000

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
            // printf("j: %di: %dlist: %d\n", j, i, list[j *i]);
        }
    }
    for (long long int i = 0; i < n; i++) {
        if (list[i]) printf("%lld\n", i);
    }
}

int main() {
    Sieve(N);

    return 0;
}
