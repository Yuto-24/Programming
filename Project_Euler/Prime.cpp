#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
// scanf("%d", &x); => std::cin >> x;
// printf("%d\n", x); => std::cout << x << "\n";

// NN以下の素数を列挙して，primes[NN]に入れる

#define NN 10000

int primes[NN];

void GetFactor() {
    int prime_count = 0;
    for (int i = 2; i < NN; i++) {
        for (int j = 0; j < prime_count; j++) {
            if (i % primes[j] == 0) {
                goto ISPRIME;
            }
        }
        primes[prime_count++] = i;
        if (prime_count == NN) {
            break;
        }
    ISPRIME : {}
    }
    for (int i = 0; i < prime_count; i++)
    {
        printf("No %05d. %7d\n", i + 1, primes[i]);
    }
    
}

int main(int argc, char *argv[]) {
    GetFactor();
    return 0;
}