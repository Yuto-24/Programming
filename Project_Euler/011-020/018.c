#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NN 15  //配列(正方)の1辺

// 配列の用意
int ary[NN + 2][NN + 2];

// 配列を出力する
void PrintAry(){
    for (int i = 0; i <= NN; i++) {
        for (int j = 0; j <= NN; j++) {
            printf("%5d", ary[i][j]);
            if (j == 0) {
                printf("|");
            }
        }
        if (i == 0) {
            printf("\n      ");
            for (int k = 0; k < NN; k++) {
                printf("‾‾‾‾‾");
            }
        }
        printf("\n");
    }
    printf("\n");
}


// 配列を準備
void MkAry() {
    // 配列の初期化
    for (int i = 0; i <= NN; i++) {
        for (int j = 0; j <= NN; j++) {
            ary[i][j] = 0;
            if (i == 0) {
                ary[i][j] = j;
            } else if (j == 0) {
                ary[i][j] = i;
            }
        }
    }
    // 入力の読み取り
    for (int i = 1; i <= NN; i++) {
        for (int j = 1; j <= i; j++) {
            scanf("%d", &ary[i][j]);
        }
    }
    // 入力の確認
    printf(" Inputs\n\n");
    PrintAry();
}

void PlusHeavy(int i, int j) {  //入力のh,vは座標に対応
    printf("x:%d, y:%d\n", i, j);
    printf("before:%d\n", ary[i][j]);
    if (ary[i + 1][j] < ary[i + 1][j + 1]) {
        ary[i][j] += ary[i + 1][j + 1];
    } else {
        ary[i][j] += ary[i + 1][j];
    }
    printf("after:%d\n\n", ary[i][j]);

    PrintAry();
}

int main() {
    MkAry();

    for (int i = NN; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            PlusHeavy(i, j);
        }
    }

    return 0;
}