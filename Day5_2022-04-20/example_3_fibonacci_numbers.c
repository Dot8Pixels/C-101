#include <stdio.h>
int main()
{
    // int num;

    // printf("Enter Number: ");
    // scanf("%d", &num);

    double fn, sum;
    double f1 = 1;
    double f2 = 1;

    int round = 18;

    for(int c = 1; c <= round; c++)
    {

        printf("Round: %d\n", c);

        sum = f1 + f2;
        fn = (double)f2/(float)f1; 
        printf("f1: %lf, f2: %lf, sum: %lf\n", f1, f2, sum);
        printf("Fibo: %lf\n", fn);
        printf("-----------------------------------------------------------\n");

        f1 = f2;
        f2 = sum;

    }

    return 0;
}