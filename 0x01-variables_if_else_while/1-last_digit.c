#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print if number is grather than 5 or
 *        less than 6 or equal 0
 *
 * Return: 0 (success)
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int x = n % 10;
if (x > 5)
{
printf("Last digit of %n is %d and is greater than 5", n, x);
}
else if (x < 6 && x != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0", n, x);
}
else
{
printf("Last digit of %d is %d and is 0", n, x);
}
return (0);
}
