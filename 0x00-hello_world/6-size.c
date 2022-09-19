#include<stdio.h>
/**
 * main - Entry
 *
 * Return: Always 0
*/
int main(void)
{
int x;
char b;
long int c;
long long int y;
float z;

printf("size of a char: %i byte(s)\n", sizeof(b));
printf("size of an int: %i byte(s)\n", sizeof(x));
printf("size of a long int: %i byte(s)\n", sizeof(c));
printf("size of a long long int: %i byte(s)\n", sizeof(y));
printf("size of a float: %i byte(s)\n", sizeof(z));
return (0);
}
