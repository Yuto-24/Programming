#include <stdio.h>
#define N 4

int p[N];
char ok[N + 1];

void show(void) {
	int i;
	for (i = 0; i < N; i++) {
		printf(" %d", p[i]);
	}
	printf("\n");
}

void put(int pos, int k) {
	int j;
	p[pos] = k;
	if (pos == N - 1) {
		// show();
	} else {
		ok[k] = 0;
		for (j = 1; j <= N; j++) {
			if (ok[j]) {
				put(pos + 1, j);
			}
		}
		ok[k] = 1;
	}
}

void genperm(void) {
	int k;
	for (k = 1; k <= N; k++) {
		ok[k] = 1;
	}
	for (k = 1; k <= N; k++) {
		put(0, k);
	}
}
int main(void) {
	genperm();
	return 0;
}