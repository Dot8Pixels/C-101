#include <stdio.h>

int main()
{

    int a = 8;
    int b = 10;

    printf("a=%d , b=%d\n", a, b);

    printf("--------- Swapped ---------\n"); 

    int temp = a;
    a = b;
    b = temp;

    printf("a=%d, b=%d", a,b);
    
    return 0;

}

// a = น้ำแดง
// b = น้ำโค้ก

// ปาก <== น้ำแดง a
// a = ว่าง

// ิิa <== โค้ก b
// a = โค้ก

// ิb = ว่าง
// b <== น้ำแดง ปาก