#include "main.h"
/**
 * _strspn - function to scan string
 * @s: string to be scanned
 * @accept: characters to match
 * Return: (i)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				len++;
				break;
			}
		}
		s++;
	}
	return (i);
}
