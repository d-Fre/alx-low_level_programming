#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer
 * Return: Alway 0 (Success)
 */

int main(void)
{
	char f;
	int r;
	long int e;
	long long int d;
	float y;

printf("Size of a chart: %zu byte(s)\n", (unsigned long)sizeof(f));
printf("Size of an int: %zu byte(s)\n", (unsigned long)sizeof(r));
printf("Size of a long int: %zu byte(s)\n", (unsigned long)sizeof(e));
printf("size of a long long int: %zu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %zu byte(s)\n", (unsigned long)sizeof(y));
return (0);
}
