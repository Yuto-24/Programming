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

// 配列数
#define NN 100
// 表示したい桁数
#define N 10


mpz_class array[NN];
int main() {
    mpz_class sum = 0;
    for (int i = 0; i < NN; i++) {
        // scanf("%lld", &array[y]);
        std::cin >> array[i];
        sum += array[i];
    }

    mpz_class summ = sum;
    int digit = 0;
    while (summ != 0) {
        summ /= 10;
        digit++;
    }

    digit = digit - N;
    if (digit <= 0) {
        std::cout << "err (N > answer)"
                  << "\n"
                  << "digit = " << digit + N << "\n"
                  << "accurate = " << sum << "\n";
        return 0;
    }

    std::cout << "accurate:" << sum << "\n";
    for (int i = 0; i < digit; i++) {
        sum /= 10;
    }

    std::cout << "first " << N << " digits: " << sum << "\n";
    return 0;
}