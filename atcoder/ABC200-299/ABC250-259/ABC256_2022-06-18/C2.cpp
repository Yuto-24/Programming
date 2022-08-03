#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

int main() {
    ll h1, h2, h3, w1, w2, w3;
    cin >> h1 >> h2 >> h3 >> w1 >> w2 >> w3;
    ll count = 0;

    // ary
    // a b c
    // d e f
    // g h i
    ll a, b, c, d, e, f, g, h;
    for (ll a00 = 1; a00 <= h1; a00++) {
        for (ll a01 = 1; a01 <= h2; a01++) {
            for (ll a10 = 1; a10 <= h1; a10++) {
                for (ll a11 = 1; a11 <= h2; a11++) {
                    a = a00;
                    b = a01;
                    c = h1 - (a + b);
                    d = a10;
                    e = a11;
                    f = h2 - (d + e);
                    g = w1 - (a + d);
                    h = w2 - (b + e);
                    ll iH = w3 - (c + f);
                    ll iW = h3 - (g + h);

                    // cout << a << " " << b << " " << c << "\n"
                    //      << d << " " << e << " " << f << "\n"
                    //      << g << " " << h << " [" << iH << "/" << iW << "]\n";

                    if (g > 0 && h > 0 && c > 0 && f > 0 && iH > 0 && iH == iW) {
                        count++;

                        cout << a << " " << b << " " << c << "\n"
                             << d << " " << e << " " << f << "\n"
                             << g << " " << h << " " << iW << "\n";
                    }
                }
            }
        }
    }

    cout << count << endl;

    return 0;
}
