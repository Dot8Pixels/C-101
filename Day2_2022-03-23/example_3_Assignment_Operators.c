// Working of assignment operators
#include <stdio.h>
int main()
{
    // int a = 5, c;

    // c = a;      // c is 5
    // printf("c = %d\n", c);
    // c += a;     // c is 10 
    // printf("c = %d\n", c);
    // c -= a;     // c is 5
    // printf("c = %d\n", c);
    // c *= a;     // c is 25
    // printf("c = %d\n", c);
    // c /= a;     // c is 5
    // printf("c = %d\n", c);
    // c %= a;     // c = 0
    // printf("c = %d\n", c);

    int a = 10;
    a++;
    ++a;
    a = a + 1;
    a += 2;
    a += 5;
    a *= 5;
    printf("a = %d", a);

    return 0;
}