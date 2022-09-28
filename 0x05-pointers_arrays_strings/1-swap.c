#include "main.h"
/**
 * swap_int - int main
 * @a: declaring a and paramter to swap
 * @b: declaring b and parameter for swap
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
