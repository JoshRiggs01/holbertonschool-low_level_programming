#include "main.h"
/**
* _strcpy - Copies a string pointed to by src, including the
*           terminating \n,pointed to by @dest.
* @dest: A buffer to copy the string to.
* @src: The source string to copy.
*
* Return: dest.
*/
char *_strcpy(char *dest, const char *src)
{
int i;

i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
dest[i] = '\0';
return (dest);
}
