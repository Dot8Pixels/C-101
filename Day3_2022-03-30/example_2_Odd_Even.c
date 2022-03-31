#include <stdio.h>

int main()
{
    int x;

    printf("Enter Interger Number to check Odd/Even : ");
    scanf("%d", &x); // assume input x = 5

    int r = x % 2; // r = 5 % 2 -> 1 --> r = 1

    printf("%d == Odd is %d\n", x, r);

    x += r * (r + 1); // r + 1 = 1 + 1 = 2
                      // x += 1 * (2)
                      // x += 2
                      // x = x + 2 = 5 + 2
                      // x = 7

    printf("x = %d", x);

    return 0;
}