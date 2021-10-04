#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>

// 多倍長テンプレ
/* ---------------------- ここから ---------------------- */
#include <boost/multiprecision/cpp_dec_float.hpp>
#include <boost/multiprecision/cpp_int.hpp>
namespace mp = boost::multiprecision;
// 任意長整数型
using Bint = mp::cpp_int;
// 仮数部が1024ビットの浮動小数点数型(TLEしたら小さくする)
using Real = mp::number<mp::cpp_dec_float<1024>>;
/* ---------------------- ここまで ---------------------- */

// scanf("%d", &x); => std::cin >> x;
// printf("%d\n", x); => std::cout << x << "\n";

int main() {
    Bint N, X, M;
    std::cin >> N;
    std::cin >> X;
    std::cin >> M;
    Bint ans = X;
    Bint A = X;
    Bint B;
    
    for (int i = 1; i < N; i++) {
        B = ans - A;
        ans += ((B % M) * (B % M)) % M;
        A = ans;
    }

    std::cout << ans << "\n";
    return 0;
}