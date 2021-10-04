#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
// scanf("%d", &x); => std::cin >> x;
// printf("%d\n", x); => std::cout << x << "\n";

int main() {
    long double d, t, s;
    scanf("%Lf%Lf%Lf", &d, &t, &s);

    long double IsTime = t - (d / s);
    if (IsTime >= 0) {
        puts("Yes");
        return 0;
    }

    puts("No");
    return 0;
}