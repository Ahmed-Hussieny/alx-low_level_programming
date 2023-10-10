#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print the alphabet in lowercase
 *        except q and e
 *
 * Return: 0 (success)
 */

int main(void)
{
char l;
for (l = 'a'; l <= 'z'; l++)
{
if (l != 'q' && l != 'e')
{
putchar(l);
}

}
putchar('\n');
return (0);
}
