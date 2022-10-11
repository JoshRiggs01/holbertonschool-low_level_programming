#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds numbers
 * @argc: arg counter
 * @argv: arg vector
 *
 * Return: value of x or 1 if error
 */

int main(int argc, char *argv[])
{
	int x = 0, y, z;

	for (y = 1; y < argc; y++)
	{
		for (z = 0; argv[y][z]; z++)
		{
			if (isdigit(argv[y][z]) == 0)
			{
				puts("Error");
				return (1);
			}
		}
	}
	for (y = 1; y < argc; y++)
	{
		x += atoi(argv[y]);
	}
	printf("%d\n", x);
	return (0);
}
