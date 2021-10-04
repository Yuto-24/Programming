#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>


// mまでの素数を列挙
// from here

#define M 10000

int prime[M];
int n = 0;

void MakePrimeList(int m) { 
    prime[0] = 2;
    n = 1;
    for (int i = 3; i <= m; i++) {
        bool flag = true;
        for (int k = 0; k < n; k++) {
            if (i % prime[k] == 0) {
                flag = false;
                break;
            }
        }
        if (flag) {
            prime[n] = i;
            n++;
        }
    }
}

// to here

int main() {
    MakePrimeList(M);
    for (int i = 0; i < 100; i++) {
        printf("%d\n", prime[i]);
    }

    return 0;
}
