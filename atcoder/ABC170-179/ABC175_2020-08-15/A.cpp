#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
// scanf("%d", &x); => std::cin >> x;
// printf("%d\n", x); => std::cout << x << "\n";

int main() {
    char x[3];
    char *s1 = "SSS";
    char *s2 = "SSR";
    char *s3 = "SRS";
    char *s4 = "RSS";
    char *s5 = "RRS";
    char *s6 = "RSR";
    char *s7 = "SRR";
    char *s8 = "RRR";

    int ans = 1;
    scanf("%s", x);

    if (strcmp(s1, x) == 0) {
        ans = 0;
    } else if (strcmp(s5, x) == 0 || strcmp(s7, x) == 0) {
        ans = 2;
    } else if (strcmp(s8, x) == 0) {
        ans = 3;
    } else {
        ans = 1;
    }

    printf("%d\n", ans);
    return 0;
}