#include <bits/stdc++.h>
using namespace std;

int main() {
    int h1, h2, h3, w1, w2, w3, iH, iW;
    cin >> h1 >> h2 >> h3 >> w1 >> w2 >> w3;
    int count = 0;

    int a, b, c, d, e, f, g, h;
    for (a = 1; a <= 30; a++) {
        for (b = 1; b <= 30; b++) {
            for (d = 1; d <= 30; d++) {
                for (e = 1; e <= 30; e++) {
                    c = h1 - (a + b);
                    f = h2 - (d + e);
                    g = w1 - (a + d);
                    h = w2 - (b + e);
                    iH = w3 - (c + f);
                    iW = h3 - (g + h);
                    if (g > 0 && h > 0 && c > 0 && f > 0 && iH > 0 && iH == iW) count++;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}
