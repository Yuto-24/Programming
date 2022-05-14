#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int IsLeap(int y) {
    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) return 1;
    return 0;
}

int JoudgeDays(int m) {
    m++;
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        return 31;
    else if (m == 2)
        return 28;
    else
        return 30;
}

int date[100][12][31];
void Setday() {
    int counter = 0;
    int days;
    int sumS = 0;
    for (int y = 0; y < 101; y++) {
        for (int m = 0; m < 12; m++) {
            days = JoudgeDays(m);
            if (m == 1 && IsLeap(y + 1900) == 1) {
                days++;
            }
            for (int d = 0; d < days; d++) {
                counter++;
                date[y][m][d] = counter % 7;
                if (counter % 7 == 0 && d == 0 && y > 0) {
                    sumS++;
                    printf("%3.3d. %4d - %2d - %d\n", sumS, y + 1900, m + 1, d + 1);
                }
            }
        }
    }
    printf("res:%d\n",sumS);
}

int main(int argc, char *argv[]) {
    Setday();
    return 0;
}