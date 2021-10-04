#include <gmpxx.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
// int => mpz_class
// scanf("%d", &x); => std::cin >> x;
// printf("%d\n", x); => std::cout << x << "\n";

// コンパイル時に -lgmpxx -lgmp

int CountE(int k) {
    int count = 0;
    for (int i = k; i >= 1; i /= 10) {
        count++;
    }
    return count;
}

int StartK(int x) {
    int k = 7;
    for (int i = 1; i < x; i++) {
        k = k * 10 + 7;
    }
    return k;
}

int main() {
    long int k;
    scanf("%ld", &k);
    int flag = 0;
    mpz_class mk777 = StartK(CountE(k)); /* 7がkの桁数並んだ数 */
    // std::cout << mk777 << "\n";

    for (int i = 0; i < k * 1000; i++) {
        if (mk777 % k == 0) {
            printf("%d\n", i + CountE(k));
            flag = 1;
            return 0;
        }
        mk777 = mk777 * 10 + 7;
    }

    if (flag == 0) {
        printf("-1\n");
    }
    return 0;
}