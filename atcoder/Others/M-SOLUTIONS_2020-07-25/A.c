#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int x;
    scanf("%d", &x);
    if (x >= 400 && x <= 599) {
        puts("8");
    }
    if (x >= 600 && x <= 799) {
        puts("7");
    }
    if (x >= 800 && x <= 999) {
        puts("6");
    }
    if (x >= 1000 && x <= 1199) {
        puts("5");
    }
    if (x >= 1200 && x <= 1399) {
        puts("4");
    }
    if (x >= 1400 && x <= 1599) {
        puts("3");
    }
    if (x >= 1600 && x <= 1799) {
        puts("2");
    }
    if (x >= 1800 && x <= 1999) {
        puts("1");
    }

    return 0;
}