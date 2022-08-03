#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

int main(int argc, char **argv) {
    int h1, h2, h3, w1, w2, w3;
    cin >> h1 >> h2 >> h3 >> w1 >> w2 >> w3;
    int count = 0;

    int a[3][3];
    for (int a00 = 1; a00 <= h1; a00++) {
        for (int a01 = 1; a01 <= h2; a01++) {
            for (int a10 = 1; a10 <= h1; a10++) {
                for (int a11 = 1; a11 <= h2; a11++) {
                    a[0][0] = a00;
                    a[0][1] = a01;
                    a[0][2] = h1 - (a[0][0] + a[0][1]);
                    a[1][0] = a10;
                    a[1][1] = a11;
                    a[1][2] = h2 - (a[1][0] + a[1][1]);
                    a[2][0] = w1 - a[0][0] - a[1][0];
                    a[2][1] = w2 - a[0][1] - a[1][1];
                    int a22H = w3 - (a[0][2] + a[1][2]);
                    int a22W = h3 - (a[2][0] + a[2][1]);

                    if (a[2][0] > 0 && a[2][1] > 0 && a[0][2] > 0 && a[1][2] > 0 && a22H > 0 && a22H == a22W) {
                        count++;

                        // cout << a[0][0] << " " << a[0][1] << " " << a[0][2] << "\n"
                        //      << a[1][0] << " " << a[1][1] << " " << a[1][2] << "\n"
                        //      << a[2][0] << " " << a[2][1] << " [" << a22H << "/" << a22W << "]\n";
                    }
                }
            }
        }
    }

    cout << count << endl
         << endl;

    return 0;
}
