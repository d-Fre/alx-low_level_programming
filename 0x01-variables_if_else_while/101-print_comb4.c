#include <stdio.h>
/**
 * main - Prints all possible different combinations of three digits
 * Return: 0 (Success)
 */

int main(void)
{
	int f, r, e;

	for (f = '0'; f < '9'; f++)
	{

	for (r = f + 1; r <= '9'; r++)
	{

	for (e = r + 1; e <= '9'; e++)
	{
	if ((r != f) != e)
	{
	putchar(f);
	putchar(r);
	putchar(e);
	if (f == '7' && r == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
