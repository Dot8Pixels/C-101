// Working of increment and decrement operators
#include <stdio.h>
int main()
{
    // int a = 10, b = 100;
    // float c = 10.5, d = 100.5;

    // printf("++a = %d \n", ++a);
    // printf("--b = %d \n", --b);
    // printf("++c = %f \n", ++c);
    // printf("--d = %f \n", --d);

    // int x;
    // x = a++ + b;
    // printf("x = %d\n", x);

    // printf("++a = %d \n", ++a); // a 10+1
    // printf("a++ = %d \n", a++); // 11 + 1
    // printf("a = %d", a);

    // int a = 10;

    // a = 10;
    // printf("initial a = %d \n", a);
    // printf("++a = %d \n", ++a); // Print a then a = a + 1
    // printf("a = %d \n", a);

    // a = 10;
    // printf("initial a = %d \n", a);
    // printf("a++ = %d \n", a++); // a = a + 1 then print a
    // printf("a = %d \n", a);

    int x;

    int a =10;
    int b =100;
    x = ++a + b;
    printf("x = %d\n",x);
    printf("--a = %d\n",--a); //10

    a =10;
    b =100;
    x = a++ + b;
    printf("x = %d\n",x);
    printf("a-- = %d\n",a--); //11

    return 0;

}