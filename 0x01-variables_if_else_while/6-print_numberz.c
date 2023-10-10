#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print the numbers from 0 to 9
 *
 * Return: 0 (success)
 */

int main(void)
{
int l;
for (l = 0; l < 10; l++)
{
putchar(l + '0');
}
putchar('\n');
return (0);
}
