#include <stdio.h>

/**
 * fibonacci_93 - printing f93 and higher
 * @a: f91
 * @b: f92
 *
 * Return: none
 **/
void fibonacci_93(unsigned long a, unsigned long b)
{
	unsigned long i1, j1, n1, i2, j2, n2;
	int c;

	c = 1;
	i1 = a / 100;
	j1 = b / 100;
	i2 = a % 100;
	j2 = b % 100;
	while (c <= 6)
	{
		n1 = i1 + j1;
		n2 = i2 + j2;
		if (n2 >= 100)
		{
			n2 = n2 % 100;
			n1 = n1 + 1;
			if (n2 < 10)
				printf("%lu0%lu", n1, n2);
			else
				printf("%lu%lu", n1, n2);
		}
		else
			printf("%lu%lu", n1, n2);
		if (c != 6)
			printf(", ");
		i1 = j1;
		j1 = n1;
		i2 = j2;
		j2 = n2;
		c++;
	}
}
/**
 * main - entry point, print fibonacci numbers to 92
 *
 * Return: Always 0.
 **/
int main(void)
{
	unsigned long i, j, n;

	i = 1;
	j = 2;
	n = 2;
	while (n <= 90)
	{
		printf("%lu, %lu, ", i, j);
		i = i + j;
		j = j + i;
		n += 2;
	}
	printf("%lu, %lu, ", i, j);
	fibonacci_93(i, j);
	printf("\n");
	return (0);
}
