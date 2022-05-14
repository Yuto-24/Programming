#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countchain(long int x) {
    int count = 1;
    while (x != 1) {
        if (x % 2 == 0) {
			// printf("count:%d x:%ld =>",count, x);
            x = x / 2;
            count++;
			// printf(" x:%ld\n",x);
        } else {
			// printf("count:%d x:%ld =>",count, x);
            x = 3 * x + 1;
            count++;
			// printf(" x:%ld\n",x);
        }
    }
    return count;
}

int main() {
    int max = 0;
	int ans = 0;
    for (long int i = 2; i < 1000000; i++) {
        int n = countchain(i);
		// printf("i:%ld, n:%d\n",i ,n);
        if (n > max) {
			ans = i;
            max = n;
        }
    }
	printf("max = %d, Really ?:%d",ans, countchain(ans));
    return 0;
}

// int main() {
// 	int n = countchain(35655);
// 	printf("%d",n);
// 	return 0;
// }