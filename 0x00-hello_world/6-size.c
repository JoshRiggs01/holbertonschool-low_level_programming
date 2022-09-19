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

printf("size of char is=%i byte(s)\n", sizeof(b));
printf("size of int is=%i byte(s)\n", sizeof(x));
printf("size of long int is=%i byte(s)\n", sizeof(c));
printf("size of long long int is=%i byte(s)\n", sizeof(y));
printf("size of float is=%i byte(s)\n", sizeof(z));
return (0);
}
