#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NN 99

int main() {
    int ary[NN];
    int sum = 0;
    for (int i = 0; i < NN; i++) {
        scanf("%d", &ary[i]);
        sum += ary[i];
    }
    sum *= 10;
    sum += 99 * 9 * 10/* hundred and 9列 99行 */ + 36 * 100/* one ~ nine 100行 */ + 7 * 9/* hundred 9個 */ + 11/* one thousand */;
    printf("%d\n", sum);
    return 0;
}