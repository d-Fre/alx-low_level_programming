#include <stdio.h>
/**
 * main - Prints all possible different combinations of two digits
 * Return: 0 (Success)
 */

int main(void)
{
	int r, s;

	for (r = '0'; r < '9'; r++)
	{

	for (s = r + 1; s <= '9'; s++)
	{
	if (s != r)
	{
	putchar(r);
	putchar(s);
	if (r == '8' && s == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
