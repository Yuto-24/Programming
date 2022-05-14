#include <stdio.h>
int main() {
    printf("%d\n",2520 * 11 * 13 * 2 * 17 * 19);
    return 0;
}

// #include <math.h>
// #include <stdbool.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main()
// {
//     long long int answer = 1;
//     int i = 20;
//     while (i > 1)
//     {
//         printf("i= %d answer=%I64d\n", i, answer);
//         while (answer % i != 0)
//         {
//             answer = answer * i;
//             printf("%d %I64d\n", i, answer);
//         }
//         i = i - 1;
//     }
//     printf("%I64d\n", answer);
//     return 0;
// }

/* 
long long int sum = 1;
int n;

int product (n)
{
    int i = n;
    while (i > 0)
    {
        sum = sum * i;
        printf("%d, %I64d\n",i ,sum);
        i = i - 1;
    }
    printf ("%I64d\n",sum);
    return sum;
}

int factor( long long int f )
{
    int a = 0;
    int m = sqrt(f);
    for (int i = 2; i <= m; i++)
    {
        if (f % i == 0)
        {
            printf("n= %I64d, i= %d\n", f, i );
            while (f % i == 0)
            {
                f = f/i;
                printf("n= %I64d\n", f);
                a = i;
            }
        }
    }
    printf("%d\n", a);
    return 0;
}


int main()
{
    printf("> ");
    scanf("%d", &n);
    product(n);
    factor(sum);
    return 0;
} */