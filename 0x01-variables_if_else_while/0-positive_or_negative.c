#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{printf("is positive %d", n); }
else if (n < 0)
{printf("is negative %d", n); }
else
{printf("is zero %d", n); }
return (0);
}
