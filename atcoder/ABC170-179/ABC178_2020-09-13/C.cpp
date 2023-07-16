#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/times.h>  // 構造体tmsを使うために必要.
#include <time.h>
#include <unistd.h>
// #include <iostream>
// #include <gmpxx.h>

// コンパイル時に
// -lgmpxx -lgmp

// printf("%d\n", x); => std::cout << x << "\n";
// scanf("%d", &x); => std::cin >> x;
// int => mpz_class

// using namespace std;で std:: を省略できる

#define waru 1000000007

int main(int argc, char **argv) {
    long long n;
    scanf("%lld", &n);

    long long ans = n % waru;
    ans *= (n - 1) % waru;
    // printf("%lld\n", ans);

    for (int i = 0; i < n - 2; i++) {
        ans *= 10;
        ans %= waru;
        // printf("%lld\n", ans);
    }

    printf("%lld\n", ans);
    return 0;
    // 0, 9, 9, 1 をダブルカウントしちゃうから駄目
}
