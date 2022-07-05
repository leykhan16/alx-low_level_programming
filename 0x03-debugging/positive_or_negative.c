#include <stdio.h>

/**
 * main - prints integer as positive or negative
 * Description: prints as positive or negative
 * Return: 0
 */

int main(void)
{
	int i;

	i = 0;
	positive_or_negative(i);

	return (0);
}


/**
 * positive_or_negative - prints numbers negative or positive
 * Description: prints positive or negative
 * Return: void
 */

void positive_or_negative(int i)

{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	} else if (i < 0)
		printf("%d is negative\n", i);
}
