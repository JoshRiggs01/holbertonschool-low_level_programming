#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplys x and y to get z
 * @argc: arg counter
 * @argv: arg vector
 *
 * Return: 0 if no error 1 if error
 */
int main(int argc, char *argv[])
{
	int x, y, z;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	z = x * y;
	printf("%d\n", z);
	return (0);
}
