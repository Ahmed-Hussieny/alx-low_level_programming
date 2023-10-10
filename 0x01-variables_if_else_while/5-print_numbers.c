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
printf("%d", l);
}
printf("\n");
return (0);
}
