#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
#define ll long long int

int main(int argc, char **argv) {
	char name[30];
	cin >> name;
	char Nickname[30];
	int count = 0;
	for (int i = 0; i < strlen(name); i++) {
		if (name[i] != 'a' && name[i] != 'i' && name[i] != 'u' && name[i] != 'e' && name[i] != 'o' && name[i] != 'A' && name[i] != 'I' && name[i] != 'U' && name[i] != 'E' && name[i] != 'O') {
			Nickname[count] = name[i];
			count++;
		}
	}
	Nickname[count] = '\0';
	cout << Nickname << endl;

	return 0;
}
