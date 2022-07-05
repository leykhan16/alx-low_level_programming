#include "main.h"
/**
 * print_alphabet - prints lowercase alphabet
 * Description: printing alphabets in lowercase
 *Return: void
 */
void print_alphabet(void)
{
	char s;

	for (s = 'a'; s  <= 'z'; s++)
	{
		_putchar(s);
	}
	_putchar('\n');
}
