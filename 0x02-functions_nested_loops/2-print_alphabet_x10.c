#include "main.h"
/**
 * print_alphabet_x10 - repeats alphabets 10x
 * Description: Print numbers ten times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	char m;

	for (i = 0; i < 10; ++i)
	{
		for (m = 'a'; m <= 'z'; m++)
		{
			_putchar(m);
		}
		_putchar('\n');
	}
}
