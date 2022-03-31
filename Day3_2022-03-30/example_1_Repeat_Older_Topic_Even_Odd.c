#include <stdio.h>
int main()
{
    int input_num;

    printf("Please input number: ");
    scanf("%d", &input_num);
    // printf("%d", input_num);

    int result = input_num%2;

    //  printf("%d = Odd is %d\n", input_num, input_num%2);

    printf("%d = Odd is %d", input_num, result);

    return 0;
}


// 6 / 2 = 3 0 -> Even
// 7 / 2 = 3 1 -> Odd
// 8 / 2 = 4 0 -> Even

// 7   %   7   =   1   0 -> 0 
// 9   %   7   =   1   2 -> 2
// 10  %   7   =   1   3 -> 3

