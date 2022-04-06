#include <stdio.h>

int main()
{
    int x;

    printf("Enter Interger Number to check Odd/Even : ");
    scanf("%d", &x); // assume input x = 5

    int r = x % 2; // r = 5 % 2 -> 1 --> r = 1

    printf("%d == Odd is %d\n", x, r);

    x += !r * (r + 2); // ! not gate --> reverse bit

    printf("x = %d", x);

    return 0;

}