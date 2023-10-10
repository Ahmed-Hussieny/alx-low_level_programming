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
char l;
for (l = 'z'; l >= 'a'; l--)
{
putchar(l);
}
putchar('\n');
return (0);
}
