#include <stdio.h>

int main()
{

    int x;

    printf("Input: ");
    scanf("%d",&x);

    int b = 1; // 0000001

    printf("Before Shift: %d\n", b);

    b = b << 5; // 000000100000

    printf("After Shift: %d\n", b);

    int r = x & 2;

    printf("%d == Odd is %d\n", x, r);
    
    return 0;

}