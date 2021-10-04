#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
// scanf("%d", &x); => std::cin >> x;
// printf("%d\n", x); => std::cout << x << "\n";

int main() {
    char s[1005];
    char adds[] = "s";
    char addes[] = "es";
    scanf("%s", s);
    int len = strlen(s);
    if (s[len - 1] != 's') {
        strcat(s, "s");
    } else {
        strcat(s, "es");
    }
    puts(s);
    return 0;
}