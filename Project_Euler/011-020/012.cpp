#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count(int i) {
    int j = 1;
    int count_num = 0;
    while (j <= i) {
        if (i % j == 0) {
            count_num++;
            if (count_num >= 500) {
                printf("answer = %d\n", i);
                return i;
            }
        }
        j++;
    }

    // printf("i = %d, count = %d\n",i,count_num);
    return count_num;
}

int main() {
    int sum = 0;
    for (int i = 0; i < 1000000; i++) {
        sum += i;
        count(sum);
    }

    return 0;
}