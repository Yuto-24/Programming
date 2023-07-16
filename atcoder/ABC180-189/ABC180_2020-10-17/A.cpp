#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
// scanf("%d", &x); => std::cin >> x;
// printf("%d\n", x); => std::cout << x << "\n";

int main() {
    int a, b, n;
    scanf("%d%d%d", &n, &a, &b);
    printf("%d\n", n - a - b);
    return 0;
}