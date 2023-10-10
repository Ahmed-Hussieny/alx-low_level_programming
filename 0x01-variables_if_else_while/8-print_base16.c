#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print lowercase alphabet in reverse
 *
 * Return: 0 (success)
 */

int main(void)
{
int ll;
for (ll = 0; ll < 10; ll++)
{
putchar(ll + '0');
}
char l;
for (l = 'a'; l <= 'f'; l++)
{
putchar(l);
}
putchar('\n');
return (0);
}
