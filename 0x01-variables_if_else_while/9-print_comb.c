#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print numbers folowed by , 
 *
 * Return: 0 (success)
 */

int main(void)
{
int ll;
for (ll = 0; ll < 10; ll++)
{
putchar(ll + '0');
if (ll == 9)
continue;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
