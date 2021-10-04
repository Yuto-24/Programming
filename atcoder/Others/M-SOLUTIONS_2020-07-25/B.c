#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


int main() {
    int r, g, b, k;
    char ans[5];
    char str1[4] = "Yes";
    char str2[3] = "No";
    scanf("%d%d%d%d", &r, &g, &b, &k);
    for (int i = 0; i < k; i++) {
        if (b <= g || b <= r) { /* bが最大じゃないとき，bを2倍 */
            b *= 2;
        } else if (r >= g) {
            g *= 2;
        } else {
            b *= 2;
        }

        if (r < g && g < b) {
            strcpy(ans, str1);
            puts(ans);
            return 0;
        }
    }
    strcpy(ans, str2);
    puts("No");
    return 0;
}
