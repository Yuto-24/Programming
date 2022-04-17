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

int main(int argc, char **argv) {
    long long int a, b, c, d;
    scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
    long long int max = a * c;
    if (max < a * d) {
        max = a * d;
    }
    if (max < b * c) {
        max = b * c;
    }
    if (max < b * d) {
        max = b * d;
    }

    printf("%lld\n", max);
    return 0;
}
