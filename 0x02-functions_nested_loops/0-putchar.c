#include <unistd.h>
#include "_putchar.c"
/**
 * main - prints _putchar
 * Return: Always 0
 */
int main(void)
{
char word[8] = "_putchar";
int i;

for (i = 0; i < 9; i++)
_putchar(word[i]);
_putchar('\n');
return(0);
}
