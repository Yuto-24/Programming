#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

// コンパイル時に
// -lgmpxx -lgmp
// int => mpz_class

int main(int argc, char **argv) {
	// cout << fixed << setprecision(10);
	char pokeList[300][15];
	for (int i = 0; i < 283; i++) {
		cin >> pokeList[i];
		pokeList[i][15] = '\0';
	}

	// for (int i = 0; i < 10; i++) {
	// 	for (int j = 0; j < 15; j++) {
	// 		cout << pokeList[i][j];
	// 	}
	// 	cout << endl;
	// }

	// cout << pokeList[1][0] << pokeList[1][1] << pokeList[1][2] << endl; //フ
	// cout << pokeList[1][3] << pokeList[1][4] << pokeList[1][5] << endl; //シ
	// cout << pokeList[1][6] << pokeList[1][7] << pokeList[1][8] << endl; //ギ
	// cout << pokeList[1][9] << pokeList[1][10] << pokeList[1][11] << endl; //ソ
	// cout << pokeList[1][12] << pokeList[1][13] << pokeList[1][14] << endl; //ウ

	return 0;
}
