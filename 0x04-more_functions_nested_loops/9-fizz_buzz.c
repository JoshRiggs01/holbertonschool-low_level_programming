#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0
 *
 */
int main(void)

{
int i;
for (i = 1; i <= 100; i++)
{
if ((i % 3 == 0) || (i % 5 == 0))
printf("FizzBuzz");
if (i % 3 == 0)
printf("Fizz");
if (i % 5 == 0)
printf("Buzz");
printf("\n");
else
{
printf(%d);
}
}
return (0);
}
