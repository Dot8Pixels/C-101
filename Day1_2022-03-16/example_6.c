#include<stdio.h>

int main()
{

    int testInteger = 12;

    int *intPtr = &testInteger; // Pointer to testInteger

    printf("Show initial value : %d\n",testInteger);

    printf("Enter an integer: ");

    scanf("%d", intPtr);

    printf("Number = %d\n",testInteger);

    printf("Show point :%d\n",intPtr);
    printf("Show point :%d\n",*intPtr);

    return 100;

}
