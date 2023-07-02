#include <stdio.h>
#define MAX 100000000000
/**
 * main - entry point
 *
 * Description - a program that finds the highest
 * prime factor of a number
 *
 * Return: 0
 */
int main(void)
{
  unsigned long int i, arr[MAX], j, k = 0;

  for (i = 2; i < 612852475143; ++i)
{
for (j = 2; j < 612852475143; ++j)
{
if (i > j)
{
if (i % j != 0)
{
arr[k] = i;
++k;
}
else
  continue;
}
}
}
  for (i = 0; i <= k; ++i)
    {
      while (612852475143 % arr[i] == 0)
        printf("%lu\n", arr[i]);
    }
  return (0);
}

