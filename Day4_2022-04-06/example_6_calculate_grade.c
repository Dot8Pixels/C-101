// Program to relate two integers using =, > or < symbol

#include <stdio.h>
int main()
{

    int score;

    printf("Please input your score: ");
    scanf("%d", &score);

    if (score > 100 || score < 0)
    {
        printf("Wrong Score Input\n");
    }
    else if (score >= 80 && score <= 100)
    {
        printf("Grade -> A\n");
    }
    else if (score >= 70 && score < 80)
    {
        printf("Grade -> B\n");
    }
    else if (score >= 60 && score < 70)
    {
        printf("Grade -> C\n");
    }
    else if (score >= 50 && score < 60)
    {
        printf("Grade -> D\n");
    }
    else if (score < 50)
    {
        printf("Grade -> F\n");
    }

    return 0;
}
