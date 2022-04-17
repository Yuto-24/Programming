#include <gmpxx.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
// int => mpz_class
// scanf("%d", &x); => cin >> x;
// printf("%d\n", x); => std::cout << x << "\n";

// コンパイル時に -lgmpxx -lgmp

int main() {
    mpz_class x = pow(2, 1000);
    mpz_class sum = 0;
    for (int i = 0; x >= 1; i++) {
        sum += x % 10;
        std::cout << sum << "\n";
        x = x / 10;
    }

    return 0;
}