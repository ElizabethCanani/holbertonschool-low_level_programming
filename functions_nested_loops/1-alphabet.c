#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int c;
c = 97;
while (c <= 122)
{
_putchar(c);
c++;
}
_putchar('\n');
return (0);
