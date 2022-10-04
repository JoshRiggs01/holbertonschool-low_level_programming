#include "main.h"
/**
 *
 *
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	int len = 0;

	if ((*s == '\0') || (*accept == '\0'))
		return len;
	while (*s && strchr(accept, *s++))
	{
		len++;
	}
	return (len);
}
