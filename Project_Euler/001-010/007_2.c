#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// nが素数かどうかの判定
bool isprime(int n) {
    for (int m = 2; m < n; m++) {
        if (n % m == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int prime_count = 0;
    for (int i = 2;; i++) {
        if (isprime(i)) {
            prime_count++;
        }
        if (prime_count == 10001) {
            printf("nqiiv = %d\n", i);
            break;
        }
    }
    return 0;
}
