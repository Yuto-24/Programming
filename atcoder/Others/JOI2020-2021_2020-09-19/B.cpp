#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
// scanf("%d", &x); => std::cin >> x;
// printf("%d\n", x); => std::cout << x << "\n";

int main() {
    int n;
    int Di[105];
    int Dj[105];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &Di[i], &Dj[i]);
    }

    int counter = 0;
    int max = 0;
    for (int i = 0; i < n; i++) {
        if (Di[i] == Dj[i]) {
            counter++;
            if (counter >= 3) {
                puts("Yes");
                return 0;
            }

        } else {
            max = counter;
            counter = 0;
        }
    }

    if (max >= 3) {
        puts("Yes");
    } else {
        puts("No");
    }

    return 0;
}