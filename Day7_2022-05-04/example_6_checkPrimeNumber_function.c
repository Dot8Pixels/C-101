
#include <stdio.h>
int getInteger();
int checkPrimeNumebr(int n);

double result;

int main()
{

  int n;

  // no argument is passed
  n = getInteger();

  result = checkPrimeNumebr(n);

  // 0 and 1 are not prime numbers
}

// returns integer entered by the user
int getInteger()
{
  int n;

  printf("Enter a positive integer: ");
  scanf("%d", &n);

  return n;
}

int checkPrimeNumebr(int n)
{
  int i, flag = 0;

  if (n == 0 || n == 1)
    flag = 1;

  for (i = 2; i <= n / 2; ++i)
  {
    if (n % i == 0)
    {
      flag = 1;
      break;
    }
  }

  if (flag == 1)
    printf("%d is not a prime number.", n);
  else
    printf("%d is a prime number.", n);

  return 0;
}
