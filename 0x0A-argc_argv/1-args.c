#include <stdio.h>
/**
 * main - prints number of arg passed
 * @argv: arg vector
 * @argc: number of arg
 *
 * Return: (0)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
