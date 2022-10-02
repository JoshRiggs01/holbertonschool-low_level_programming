#include "holberton.h"
/**
 * cap_string - function to capitalize first letter of every word
 * @s: string to be capitalized
 *
 * Return: a pointer to string
 */

char *cap_string(char *s)
{
	int i = 0;
	{
		while (!(s[i] >= 'a' && s[i] <= 'z'))
			i++;

		if (s[i - 1] == ' ' ||
		    s[i - 1] == '\n' ||
		    s[i - 1] == '{' ||
		    s[i - 1] == '}' ||
		    s[i - 1] == '(' ||
		    s[i - 1] == ')' ||
		    s[i - 1] == '"' ||
		    s[i - 1] == '?' ||
		    s[i - 1] == '\t' ||
		    s[i - 1] == '!' ||
		    s[i - 1] == '.' ||
		    s[i - 1] == ';' ||
		    s[i - 1] == ':' ||
		    s[i - 1] == ',' ||
		    i == 0)

			s[i] -= 32;
		i++;
	}
	return (s);
}
