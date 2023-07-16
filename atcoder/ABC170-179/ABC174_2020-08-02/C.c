#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int k;
    scanf("%d", &k);
    for (int i = 0; i < k; i++) {
        if (k % i == 0) {
            printf("%d", i);
        }
    }
}