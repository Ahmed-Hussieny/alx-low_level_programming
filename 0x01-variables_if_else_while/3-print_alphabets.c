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
char l;
for (l = 'a'; l <= 'z'; l++)
{
putchar(l);
}
for (l = 'A'; l <= 'Z'; l++)
{
putchar(l);
}
putchar('\n');
return (0);
}
